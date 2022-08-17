#include <iostream>
#include <listener/listener.hpp>


void receivingData::reset()
{
	acc = 0;
	steer = 0;
	steering_mode = 13;
	steering_error = 255;
	acc_mode = 13;
	acc_error = 255;
}
receivingData::receivingData()
{
	reset();
}
receivingData::~receivingData()
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

void convertIdanData::convert_from_idan(unsigned char idan_rData[8], receivingData * rData)
{

	rData->steering_mode = idan_rData[0];
	rData->steering_error = idan_rData[1];
	//unsigned char tmp = 0b00001111;
	//std::cout << "rData->steering_mode: " << rData->steering_mode << '\n';
	if (rData->steering_mode == 5)
	{
		//idan_rData[2] = tmp & unsigned char(idan_rData[2]);
		int i_steer = idan_rData[2] << 8 | idan_rData[3];
		
		if (i_steer<steer_min || i_steer> steer_max)
			std::cout << "steering out of range\n";
		else
			rData->steer = float(2 * i_steer - steer_max - steer_min) / float(steer_max - steer_min);
		//std::cout << "read - steer: " << rData->steer << " raw: " << i_steer << '\n';
	}
	rData->acc_mode = idan_rData[4];
	rData->acc_error = idan_rData[5];
	if (rData->acc_mode == 5)
	{
		//idan_rData[6] = tmp & unsigned char(idan_rData[6]);
		int i_acc = idan_rData[6] << 8 | idan_rData[7];
		
		if (i_acc<acc_min || i_acc> acc_max)
			std::cout << "throttle/brake out of range\n";
		else
			rData->acc = float(2 * i_acc - acc_max - acc_min) / float(acc_max - acc_min);
		//std::cout << "read - acc: " << rData->acc << " raw: " << i_acc << '\n';
	}

}
