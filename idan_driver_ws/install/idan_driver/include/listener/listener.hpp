#pragma once
#include <mutex>
#include<thread>
//#include <windows.h>
#include <fstream>
//#include <stdio.h>
//#include <stdlib.h>


class receivingData
{
public:
	float acc;
	float steer;
	int steering_mode;
	int steering_error;
	int acc_mode;
	int acc_error;
	void reset();
	receivingData();
	~receivingData();
};
class convertIdanData
{
	int steer_max, steer_min, steer_middle;
	int acc_max, acc_min, acc_middle;
public:
	convertIdanData();
	~convertIdanData();
	void convert_from_idan(unsigned char idan_rData[8], receivingData * rData);
};
