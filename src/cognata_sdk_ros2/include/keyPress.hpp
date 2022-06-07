// keyPress.hpp - Cognata SDK ROS2 sample - key capture utilities
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential
//
#ifndef __COGNATAKEYBOARD_H__
#define __COGNATAKEYBOARD_H__

// for keyboard input on windows and linux
#ifdef _WIN32
#include <conio.h>
static void initKeyboard() {}

static int getKey()
{
    int keyPressed = -1;
    if (_kbhit())
    {
        keyPressed = _getch();
        keyPressed = toupper(keyPressed);
    }
    return keyPressed;
}

static void releaseKeyboard() {}
#else

#include <termios.h>            //termios, TCSANOW, ECHO, ICANON
#include <unistd.h>     //STDIN_FILENO
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/logger.hpp> //RCLCPP_INFO

static struct termios oldt, newt;

static void releaseKeyboard();

static void initKeyboard()
{
    /*tcgetattr gets the parameters of the current terminal
    STDIN_FILENO will tell tcgetattr that it should write the settings
    of stdin to oldt*/
    tcgetattr(STDIN_FILENO, &oldt);
    /*now the settings will be copied*/
    newt = oldt;

    /*ICANON normally takes care that one line at a time will be processed
    that means it will return if it sees a "\n" or an EOF or an EOL*/
    newt.c_lflag &= (uint32_t)(~(ICANON | ECHO));

    /*Those new settings will be set to STDIN
    TCSANOW tells tcsetattr to change attributes immediately. */
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    RCLCPP_INFO(rclcpp::get_logger("info"), "initializing keyboard");

    atexit(releaseKeyboard);
}

static int _kbhit()
{
    struct timeval tv = { 0L, 0L };
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(0, &fds);
    return select(1, &fds, NULL, NULL, &tv);
}

static int _getch()
{
    int r;
    unsigned char c;
    if ((r = (int)read(0, &c, sizeof(c))) < 0) {
        return r;
    }
    else {
        return c;
    }
}

static int getKey()
{
    int keyPressed = -1;
    if (_kbhit())
    {
        keyPressed = _getch();
        keyPressed = toupper(keyPressed);
    }
    return keyPressed;
}

static void releaseKeyboard()
{
    RCLCPP_INFO(rclcpp::get_logger("info"), "releasing keyboard");
    /*restore the old settings*/
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
#endif

#endif // __COGNATAKEYBOARD_H__