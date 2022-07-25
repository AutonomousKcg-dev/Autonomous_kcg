/**
 * @author Raz Gavrieli
 * This was wrriten to simplify the flow of information betweeh the jetson computer the idan actuators. 
 */ 

#include <ros/ros.h>
#include "idan.h"
#include <iostream>

#include <pthread.h>
#include <stdlib.h>

using namespace ariel_idan;

struct values {
    double wheel_val;
    double brake_pedal_val;
    double gas_pedal_val;
};

void* threadfunc(void* values) {
    /**
     *  @brief This function runs on a single thread that listens to input from the user and assigns it to the wheel value. 
     *  The main function uses wheel_val and send it to the kvaser interface through buildFrame function.
     */ 
    struct values *actualvalues = (struct values*)values;
    while (ros::ok())
    {
        std::cout << "enter steering: "; 
        std::cin >> actualvalues->wheel_val;
    }
}

int main(int argc, char *argv[]) {

    /**
     * @brief The main function creates a node, a frame object(see Frame.h) and a StreeingGasCan object (see idan.h). 
     * The while loop updates the values and sends the values to idan system through the publish at buildFrame function.
     * The thread created before the loop is the thread that listens to the input from the user, to change the values. 
     */
    ros::init(argc, argv, "ariel_idan_node");
    Frame m_CanMsgForAriel;
    ros::NodeHandle private_nh("~");
    StreeringGasCan steering_gas_can(private_nh);
    ROS_INFO("Idan Node - main, init successfully");
    ros::Rate loop_rate = 100;

    pthread_t inpurtThreadID;
    struct values* values = (struct values*)malloc(sizeof(struct values));

    pthread_create(&inpurtThreadID, NULL, threadfunc, values); // head over to threadfunc() for documentation
    while (ros::ok())
    {
        steering_gas_can.m_idan_pedal=steering_gas_can.joyPedalToIdan( values->brake_pedal_val, values->gas_pedal_val);
        steering_gas_can.m_idan_steer_angle=steering_gas_can.joySteeringToIdan(values->wheel_val);
        steering_gas_can.buildFrame();

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}
