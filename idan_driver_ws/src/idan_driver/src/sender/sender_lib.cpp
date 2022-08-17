#include<iostream>
//#include<thread>
#include <sender/sender.hpp>

void sendingData::reset()
{
	acc = 0;
	steer = 0;
	neutralize = false;
}
sendingData::sendingData()
{
	reset();
}
sendingData::~sendingData()
{
}

convertIdanData::convertIdanData()
{
	steer_max = 3700;
	steer_min = 300;
	steer_middle = 2000;
	acc_max = 3700;
	acc_min = 300;
	acc_middle = 2000;
}
convertIdanData::~convertIdanData()
{
}
void convertIdanData::convert_to_idan(sendingData * sData, unsigned char idan_sData[8])
{
	int i_steer = (sData->steer*(steer_max - steer_min) + steer_min + steer_max) / 2;
	if (i_steer > steer_max)
	{
		std::cout << "i_steer > steer_max\n";
		i_steer = steer_max;
	}
	if (i_steer < steer_min)
	{
		std::cout << "i_steer < steer_min\n";
		i_steer = steer_min;
	}
	//std::cout << "send - steer: " << sData->steer << " raw: " << i_steer << '\n';

	idan_sData[0] = i_steer >> 8;
	idan_sData[1] = i_steer;
	int i_acc = (sData->acc *(acc_max - acc_min) + acc_min + acc_max) / 2;
	if (i_acc > acc_max)
	{
		std::cout << "i_acc > acc_max\n";
		i_acc = acc_max;
	}	
	if (i_acc < acc_min)
	{
		std::cout << "i_acc < acc_min\n";
		i_steer = acc_min;
	}
	//std::cout << "send - acc: " << sData->acc << " raw: " << i_acc << '\n';
	//i_acc = 400;
	idan_sData[2] = i_acc >> 8;
	idan_sData[3] = i_acc;
	if (sData->neutralize)
		idan_sData[7] = 0x5A;
     
	 
	for (int i = 0; i < 8; i++)
		printf("%X,", idan_sData[i]);
	printf("\n");
	return;

}
