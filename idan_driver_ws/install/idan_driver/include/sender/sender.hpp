#pragma once
// #include <mutex>
// #include<thread>
//#include <windows.h>
#include <fstream>
//#include <stdio.h>
//#include <stdlib.h>
//#include "CAN_API.h"

// class IdanComm
// {
// 	TCAN_HANDLE Handle;
// 	TCAN_STATUS Status;
// 	CAN_MSG SendMSG;
// 	CAN_MSG RecvMSG;
// public:
// 	bool connect();
// 	bool write(unsigned char mess[]);
// 	bool read(char mess[]);
// 	bool disconnect();

// };

//class IdanComm
//{
//	HANDLE hFile;
//public:
//	IdanComm();
//	~IdanComm();
//	int connect();
//	void disconnect();
//	void receive(unsigned char idan_rData[8]);
//	void send(unsigned char idan_sData[8]);
//};

class sendingData
{
public:
	float acc;//throtle and brake command from -1 up to 1
	float steer;//steer command from -1 up to 1
	bool neutralize;//if true - change to neutral mode
	void reset();
	sendingData();
	~sendingData();
};
// class receivingData
// {
// public:
// 	float acc;
// 	float steer;
// 	int steering_mode;
// 	int steering_error;
// 	int acc_mode;
// 	int acc_error;
// 	void reset();
// };
class convertIdanData
{
	int steer_max, steer_min, steer_middle;
	int acc_max, acc_min, acc_middle;
public:
	convertIdanData();
	~convertIdanData();
	void convert_to_idan(sendingData * sData, unsigned char idan_sData[8]);
	//void convert_from_idan(char idan_rData[8], receivingData * rData);
};
// class Idan
// {
// private:
// 	bool* send_active;
// 	bool* done;
// 	sendingData sData;
// 	receivingData rData;
// 	IdanComm comm;
	
// 	std::mutex mtx;           // mutex for critical section

// public:
// 	Idan();
// 	~Idan();
// 	int connect();
// 	std::thread start(std::string file_name);//start sending commands to idan at 50Hz
// 	void end();
// 	void update_steer(float steer);
// 	void update_acc(float acc);
// 	void update(float acc, float steer);
// 	void neutralize();
// };

//int get_command();
//float acc;
//float steer;
//float neutralize;