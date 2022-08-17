#pragma once

//#include <stdio.h>
//#include <stdlib.h> 
#include <can_communication_titan/LinuxCAN_API.h>


class TitanComm
{
	TCAN_HANDLE Handle;
	TCAN_STATUS Status;
	CAN_MSG SendMSG;
	CAN_MSG RecvMSG;
public:
	TitanComm();
	~TitanComm();
	bool connect();
	bool write(int id,unsigned char mess[],int size);
	bool read(int * id,unsigned char mess[],int * size);
	bool disconnect();

};
