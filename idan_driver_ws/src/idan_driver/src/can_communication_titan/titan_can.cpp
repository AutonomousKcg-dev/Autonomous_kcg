#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include <can_communication_titan/titan_can.hpp>

#include <cstring>

TitanComm::TitanComm()
{
}
TitanComm::~TitanComm()
{
}
bool TitanComm::connect()
{
	printf("connect\n");
	// ROS_INFO_STREAM("connect2" );
	CHAR *ComPort = "/dev/ttyUSB0";
	CHAR *szBitrate = "500";
	CHAR *acceptance_code = "1FFFFFFF";
	CHAR *acceptance_mask = "00000039"; //"00000039";
	VOID *flags = CAN_TIMESTAMP_OFF;
	DWORD Mode = Normal;
	char version[10];
	Handle = -1;
	Status = 0;
	SendMSG.Flags = CAN_FLAGS_STANDARD;
	SendMSG.Id = 0x30; //0x31 blink!
	SendMSG.Size = 8;
	// ROS_INFO_STREAM("connect3" );
	Handle = CAN_Open(ComPort, szBitrate, acceptance_code, acceptance_mask, flags, Mode);
	RCLCPP_WARN(
		rclcpp::get_logger("logger"), "handle= %d\n", Handle);
	if (Handle < 0)
		return true; //error
	std::memset(version, 0, sizeof(char) * 10);
	Status = CAN_Flush(Handle);
	Status = CAN_Version(Handle, version);
	if (Status == CAN_ERR_OK)
	{
		RCLCPP_WARN(
			rclcpp::get_logger("logger"), "Version : %s\n", version);
	}
	return false;
}

bool TitanComm::write(int id, unsigned char mess[], int size)
{
	for (int i = 0; i < size; i++)
		SendMSG.Data[i] = mess[i];
	SendMSG.Id = id;
	Status = CAN_Write(Handle, &SendMSG);
	//CAN_Flush(Handle);
	if (Status == CAN_ERR_OK)
	{
		 RCLCPP_WARN(rclcpp::get_logger("logger"), "Write Success");
		//printf("Write Success\n");
		return false;
	}
	RCLCPP_WARN(
		rclcpp::get_logger("logger"), "Error cannot write to can. status : %d\n", Status);
// std::cout << "Error cannot write to can. status:" << Status << '\n';
return true;
}
bool TitanComm::read(int *id, unsigned char mess[], int *size)
{

	for(int i=0;i<10;i++)
	{
		RecvMSG.Id=0x0;
		Status = CAN_Read(Handle, &RecvMSG);
		// RCLCPP_WARN(
		// rclcpp::get_logger("logger"), "Read ID=0x%X, Type=%s, DLC=%d, FrameType=%s, Data=",
		// 	   RecvMSG.Id, (RecvMSG.Flags & CAN_FLAGS_STANDARD) ? "STD" : "EXT",
		// 	   RecvMSG.Size, (RecvMSG.Flags & CAN_FLAGS_REMOTE) ? "REMOTE" : "DATA");
		// 	   	for (int j = 0; j < 8; j++)
		// {
		// 	RCLCPP_WARN(
		// 		rclcpp::get_logger("logger"), "%X,", RecvMSG.Data[j]);
			
		
		// }
		// printf("Read ID=0x%X, Type=%s, DLC=%d, FrameType=%s, Data=",
		// 	   RecvMSG.Id, (RecvMSG.Flags & CAN_FLAGS_STANDARD) ? "STD" : "EXT",
		// 	   RecvMSG.Size, (RecvMSG.Flags & CAN_FLAGS_REMOTE) ? "REMOTE" : "DATA");

	
   
	 if (Status == CAN_ERR_OK)
	  {

		// RCLCPP_WARN(
		// rclcpp::get_logger("logger"), "ReadOK ID=0x%X, Type=%s, DLC=%d, FrameType=%s, Data=",
		// 	   RecvMSG.Id, (RecvMSG.Flags & CAN_FLAGS_STANDARD) ? "STD" : "EXT",
		// 	   RecvMSG.Size, (RecvMSG.Flags & CAN_FLAGS_REMOTE) ? "REMOTE" : "DATA");
		// printf("Read ID=0x%X, Type=%s, DLC=%d, FrameType=%s, Data=",
		// 	   RecvMSG.Id, (RecvMSG.Flags & CAN_FLAGS_STANDARD) ? "STD" : "EXT",
		// 	   RecvMSG.Size, (RecvMSG.Flags & CAN_FLAGS_REMOTE) ? "REMOTE" : "DATA");
        if(RecvMSG.Id==0x39){
		*id = RecvMSG.Id;
		*size = int(RecvMSG.Size);
		for (int i = 0; i < RecvMSG.Size; i++)
		{
			// RCLCPP_WARN(
				// rclcpp::get_logger("logger"), "%X,", RecvMSG.Data[i]);
			// printf("Read ID=0x%X, Type=%s, DLC=%d, FrameType=%s, Data=",
			mess[i] = RecvMSG.Data[i];
		}
		// printf("\n");
		return false;
		}
	 	continue;
	  }
	 else{
		 RCLCPP_WARN(
		rclcpp::get_logger("logger"), "Can Error  status : %d\n", Status);

		break;
	  }
	} 
	
	 // Status == -5 ||
	//printf("Error cannot read from can %d \n", Status);
	return true;
}

bool TitanComm::disconnect()
{
	RCLCPP_WARN(
				rclcpp::get_logger("logger"), "disconnect");
	// printf("disconnect\n");
	Status = CAN_Close(Handle);
	// printf("disconnect1\n");
	if (Status == CAN_ERR_OK)
	{
		RCLCPP_WARN(rclcpp::get_logger("logger"), "close Success");
		return false;
	}
	RCLCPP_WARN(rclcpp::get_logger("logger"), "close Error");

	return true;
}


