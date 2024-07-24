/*
	Copyright (c) 2012-2019 TSINGSEE.COM.  All rights reserved.
	Github: https://github.com/tsingsee
	WEChat: tsingsee
	Website: http://www.tsingsee.com
*/
#ifndef _Easy_Types_H
#define _Easy_Types_H

#ifdef _WIN32
#define Easy_API  __declspec(dllexport)
#define Easy_APICALL  __stdcall
#define WIN32_LEAN_AND_MEAN
#else
#define Easy_API
#define Easy_APICALL 
#endif

#define Easy_Handle void*

typedef int						Easy_I32;
typedef unsigned char           Easy_U8;
typedef unsigned char           Easy_UChar;
typedef unsigned short          Easy_U16;
typedef unsigned int            Easy_U32;
typedef unsigned char			Easy_Bool;

enum
{
    Easy_NoErr						= 0,
    Easy_RequestFailed				= -1,
    Easy_Unimplemented				= -2,
    Easy_RequestArrived				= -3,
    Easy_OutOfState					= -4,
    Easy_NotAModule					= -5,
    Easy_WrongVersion				= -6,
    Easy_IllegalService				= -7,
    Easy_BadIndex					= -8,
    Easy_ValueNotFound				= -9,
    Easy_BadArgument				= -10,
    Easy_ReadOnly					= -11,
	Easy_NotPreemptiveSafe			= -12,
    Easy_NotEnoughSpace				= -13,
    Easy_WouldBlock					= -14,
    Easy_NotConnected				= -15,
    Easy_FileNotFound				= -16,
    Easy_NoMoreData					= -17,
    Easy_AttrDoesntExist			= -18,
    Easy_AttrNameExists				= -19,
    Easy_InstanceAttrsNotAllowed	= -20,
	Easy_InvalidSocket				= -21,
	Easy_MallocError				= -22,
	Easy_ConnectError				= -23,
	Easy_SendError					= -24
};
typedef int Easy_Error;

typedef enum __EASY_ACTIVATE_ERR_CODE_ENUM
{
	EASY_ACTIVATE_INVALID_KEY		=		-1,			/* 无效Key */
	EASY_ACTIVATE_TIME_ERR			=		-2,			/* 时间错误 */
	EASY_ACTIVATE_PROCESS_NAME_LEN_ERR	=	-3,			/* 进程名称长度不匹配 */
	EASY_ACTIVATE_PROCESS_NAME_ERR	=		-4,			/* 进程名称不匹配 */
	EASY_ACTIVATE_VALIDITY_PERIOD_ERR=		-5,			/* 有效期校验不一致 */
	EASY_ACTIVATE_PLATFORM_ERR		=		-6,			/* 平台不匹配 */
	EASY_ACTIVATE_COMPANY_ID_LEN_ERR=		-7,			/* 授权使用商不匹配 */
	EASY_ACTIVATE_SUCCESS			=		9999,		/* 激活成功 */

}EASY_ACTIVATE_ERR_CODE_ENUM;

/* 视频编码 */
#define EASY_SDK_VIDEO_CODEC_H264	0x1C		/* H264  */
#define EASY_SDK_VIDEO_CODEC_H265	0xAE	  /* H265 */
#define	EASY_SDK_VIDEO_CODEC_MJPEG	0x08		/* MJPEG */
#define	EASY_SDK_VIDEO_CODEC_MPEG4	0x0D		/* MPEG4 */

/* 音频编码 */
#define EASY_SDK_AUDIO_CODEC_AAC	0x15002		/* AAC */
#define EASY_SDK_AUDIO_CODEC_G711U	0x10006		/* G711 ulaw*/
#define EASY_SDK_AUDIO_CODEC_G711A	0x10007		/* G711 alaw*/
#define EASY_SDK_AUDIO_CODEC_G726	0x1100B		/* G726 */

#define EASY_SDK_EVENT_CODEC_ERROR	0x63657272	/* ERROR */
#define EASY_SDK_EVENT_CODEC_EXIT	0x65786974	/* EXIT */

/* 音视频帧标识 */
#define EASY_SDK_VIDEO_FRAME_FLAG	0x00000001		/* 视频帧标志 */
#define EASY_SDK_AUDIO_FRAME_FLAG	0x00000002		/* 音频帧标志 */
#define EASY_SDK_EVENT_FRAME_FLAG	0x00000004		/* 事件帧标志 */
#define EASY_SDK_RTP_FRAME_FLAG		0x00000008		/* RTP帧标志 */
#define EASY_SDK_SDP_FRAME_FLAG		0x00000010		/* SDP帧标志 */
#define EASY_SDK_MEDIA_INFO_FLAG	0x00000020		/* 媒体类型标志*/
#define EASY_SDK_SNAP_FRAME_FLAG	0x00000040		/* 图片标志*/

/* 视频关键字标识 */
#define EASY_SDK_VIDEO_FRAME_I		0x01		/* I帧 */
#define EASY_SDK_VIDEO_FRAME_P		0x02		/* P帧 */
#define EASY_SDK_VIDEO_FRAME_B		0x03		/* B帧 */
#define EASY_SDK_VIDEO_FRAME_J		0x04		/* JPEG */

/* 连接类型 */
typedef enum __EASY_RTP_CONNECT_TYPE
{
	EASY_RTP_OVER_TCP	=	0x01,		/* RTP Over TCP */
	EASY_RTP_OVER_UDP,					/* RTP Over UDP */
	EASY_RTP_OVER_MULTICAST				/* RTP Over MULTICAST */
}EASY_RTP_CONNECT_TYPE;

typedef struct __EASY_AV_Frame
{
	Easy_U32    u32AVFrameFlag;		/* 帧标志  视频 or 音频 */
	Easy_U32    u32AVFrameLen;		/* 帧的长度 */
	Easy_U32    u32VFrameType;		/* 视频的类型，I帧或P帧 */
	Easy_U8     *pBuffer;			/* 数据 */
	Easy_U32	u32TimestampSec;	/* 时间戳(秒)*/
	Easy_U32	u32TimestampUsec;	/* 时间戳(微秒) */
} EASY_AV_Frame;

/* 媒体信息 */
typedef struct __EASY_MEDIA_INFO_T
{
	Easy_U32 u32VideoCodec;				/* 视频编码类型 */
	Easy_U32 u32VideoFps;				/* 视频帧率 */

	Easy_U32 u32AudioCodec;				/* 音频编码类型 */
	Easy_U32 u32AudioSamplerate;		/* 音频采样率 */
	Easy_U32 u32AudioChannel;			/* 音频通道数 */
	Easy_U32 u32AudioBitsPerSample;		/* 音频采样精度 */

	Easy_U32 u32VpsLength;
	Easy_U32 u32SpsLength;
	Easy_U32 u32PpsLength;
	Easy_U32 u32SeiLength;
	Easy_U8	 u8Vps[256];
	Easy_U8	 u8Sps[256];
	Easy_U8	 u8Pps[128];
	Easy_U8	 u8Sei[128];
}EASY_MEDIA_INFO_T;

/* 帧信息 */
typedef struct 
{
	unsigned int	codec;				/* 音视频格式 */

	unsigned int	type;				/* 视频帧类型 */
	unsigned char	fps;				/* 视频帧率 */
	unsigned short	width;				/* 视频宽 */
	unsigned short  height;				/* 视频高 */

	unsigned int	reserved1;			/* 保留参数1 */
	unsigned int	reserved2;			/* 保留参数2 */
	unsigned int	reserved3;			/* 保留参数3 */

	unsigned int	sample_rate;		/* 音频采样率 */
	unsigned int	channels;			/* 音频声道数 */
	unsigned int	bits_per_sample;	/* 音频采样精度 */

	unsigned int	length;				/* 音视频帧大小 */
	unsigned int    timestamp_usec;		/* 时间戳,微妙 */
	unsigned int	timestamp_sec;		/* 时间戳 秒 */
	
	float			bitrate;			/* 比特率 */
	float			losspacket;			/* 丢包率 */
}EASY_FRAME_INFO;

#endif
