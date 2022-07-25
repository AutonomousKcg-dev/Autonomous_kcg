#ifndef CAN_API_INCLUDED
#define CAN_API_INCLUDED

#include <semaphore.h>

#ifndef UINT8
#define UINT8	UCHAR
#endif
#ifndef UINT16
#define UINT16	USHORT
#endif
#ifndef UINT32
#define UINT32	ULONG
#endif

typedef void VOID;
typedef char CHAR;
typedef unsigned long DWORD;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;


typedef int TCAN_HANDLE;
typedef int TCAN_STATUS;

// Message Structure
typedef struct
{
	UINT32 Id;
	UINT8 Size;
	UINT8 Data[8];
	UINT8 Flags;
	UINT16 Timestamp;
} CAN_MSG;
//
#define FALSE							-1
#define TRUE							0
// Status / Errors
#define CAN_ERR_OK						1
#define CAN_ERR_ERR						-1
#define	CAN_ERR_OPEN_CHANNEL			-2
#define CAN_ERR_PARAMETER				-3
#define CAN_ERR_NOT_OPEN				-4
#define CAN_ERR_READ_NO_MSG				-5

// Mode
#define Normal							0
#define ListenOnly						1
#define LoopBack						2


// Timestamp
#define CAN_TIMESTAMP_OFF				(void*)0
#define CAN_TIMESTAMP_ON				(void*)1

// Flags
#define CAN_FLAGS_STANDARD				(1 << 0)
#define CAN_FLAGS_EXTENDED				(1 << 1)
#define CAN_FLAGS_REMOTE				(1 << 2)
#define CAN_FLAGS_TIMESTAMP				(1 << 3)

// Status bits
#define CAN_STATUS_BOFF					0x80
#define CAN_STATUS_EWARN				0x40
#define CAN_STATUS_EPASS				0x20
#define CAN_STATUS_LEC_NO				0x00
#define CAN_STATUS_LEC_STUFF_ERR		0x01
#define CAN_STATUS_LEC_FORM_ERR			0x02
#define CAN_STATUS_LEC_ACK_ERR			0x03
#define CAN_STATUS_LEC_BIT1_ERR			0x04
#define CAN_STATUS_LEC_BIT0_ERR			0x05
#define CAN_STATUS_LEC_CRC_ERR			0x06






#ifdef __cplusplus
extern "C"
{
#endif

TCAN_HANDLE  CAN_Open(CHAR *ComPort, CHAR *szBitrate, CHAR *acceptance_code, CHAR *acceptance_mask, VOID *flags , DWORD Mode);
	// The return value is one of CAN_STATUS
TCAN_STATUS  CAN_Close(TCAN_HANDLE Handle);
	// The return value is one of CAN_STATUS
TCAN_STATUS  CAN_Flush(TCAN_HANDLE Handle);
	// The return value is one of CAN_STATUS
TCAN_STATUS  CAN_Write(TCAN_HANDLE Handle, CAN_MSG *Buf);
	// The return value is one of CAN_STATUS
TCAN_STATUS  CAN_Read(TCAN_HANDLE Handle, CAN_MSG *Buf);
	// The return value is one of CAN_STATUS
TCAN_STATUS  CAN_Version(TCAN_HANDLE Handle,CHAR *buf);
	// The return value is one of CAN_STATUS
TCAN_STATUS  CAN_Status(TCAN_HANDLE Handle);
	// The return value is one of CAN_STATUS

#ifdef __cplusplus
}
#endif


#endif // CAN_API_INCLUDED
