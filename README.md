## TSINGSEE青犀能力开放平台

TSINGSEE青犀开放平台是由安徽旭帆信息科技有限公司创立并运营的以视频为核心的技术能力开放平台，TSINGSEE青犀开放平台目前开放有：开源社区、中间件、SDK与工具、硬件等多个方面，在整个流媒体音视频领域，TSINGSEE开放平台拥有多年的技术积累，已经在行业具备非常强的实力和领先的优势！

目前由TSINGSEE青犀开放平台运营的项目和产品主要有：

### 一、开源社区

#### &copy;	EasyDarwin
高性能开源RTSP流媒体服务器，基于go语言研发，维护和优化：RTSP推模式转发、RTSP拉模式转发、录像、检索、回放、关键帧缓存、秒开画面、RESTful接口、WEB后台管理、分布式负载均衡，基于EasyDarwin构建出了一套基础的流媒体云视频平台架构！

open source、high performance、industrial rtsp streaming server,a lot of optimization on streaming relay,KeyFrame cache,RESTful,and web management,also EasyDarwin support distributed load balancing,a simple streaming media cloud platform architecture.

#### &copy;	EasyPusher
EasyPusher是一款简单、高效、稳定、免费的一款标准RTSP/RTP协议直播推送库，支持将H.264/H.265/G.711/G.726/AAC等音视频数据推送到RTSP流媒体服务器（例如EasyDarwin）进行低延时直播或者视频通信，支持Windows、Linux、ARM、Android、iOS等平台，EasyPusher配套EasyDarwin流媒体服务器、EasyPlayer RTSP播放器适用于特殊行业的低延时应急指挥需求！

#### &copy;	EasyAACEncoder
EasyAACEncoder是一款简单、高效、稳定的开源音频编码库，支持将各种音频数据(G.711A/PCMA、G.711U/PCMU、G726、PCM)转码成AAC(with adts)格式，其中aac编码部分采用的是业界公认的faac库，EasyAACEncoder支持Windows、Linux、ARM等多种平台，能够广泛应用于各种移动终端设备、嵌入式设备和流媒体转码服务器！

### 二、中间件

- EasyRTMPLive：流媒体接入软件网关，即软件编码器，将各种协议的视频流接入并以RTMP推流的方式输出；

- EasyRTSPLive：拉流IPC摄像机或者NVR硬盘录像机RTSP流转成RTMP推送到CDN/RTMP流媒体服务器，支持多路RTSP流同时拉取并以RTMP协议推送发布，EasyRTSPLive支持任何平台；

- EasyDSS-Kernel：高性能流媒体服务器软件，是EasyDSS流媒体服务的主要核心，支持协议包括RTSP、RTMP、HLS、HTTP-FLV，Easy系列的流媒体服务核心，以稳定、高效、功能丰富、Based on nginx为指标，经过多年的技术积累，现在以技术中台的方式对内、对外开放；

### 三、SDK&工具

#### &copy;	EasyPlayer
EasyPlayer是一款精炼、高效、稳定的流媒体播放器，全系列流媒体播放器，RTSP版、RTMP版、Pro全功能版、H5版，支持各种各样的流媒体音视频播放！

An elegant, simple, fast RTSP/RTMP/HLS/HTTP Player.EasyPlayer support RTSP(RTP over TCP/UDP)version& RTMP version & Pro version，cover all kinds of streaming media！

#### &copy;	EasyStreamClient
EasyStreamClient是一款支持File、RTSP、RTMP、HTTP等各种流媒体协议的音视频提取功能组件，支持H.264、H.265、PCM、AAC等各种音视频编码格式输出，支持Windows、Linux、Android、iOS、ARM等各种平台。

EasyStreamClient support all kinds of streaming protocol, callback video & audio data，you can use this as easy ffmpeg !

#### &copy;	EasyRTMP
EasyRTMP是一套调用简单、功能完善、运行高效稳定的RTMP功能组件，经过多年实战和线上运行打造，支持RTMP推送断线重连、环形缓冲、智能丢帧、网络事件回调，支持Windows、Linux、arm（hisiv100/hisiv200/hisiv300/hisiv400/hisiv500/hisiv600/etc..）、Android、iOS平台，支持市面上绝大部分的RTMP流媒体服务器，包括Wowza、Red5、ngnix_rtmp、crtmpserver等主流RTMP服务器，能够完美应用于各种行业的直播需求，手机直播、桌面直播、摄像机直播、课堂直播等等方面！

#### &copy;	EasyRTSPClient
EasyRTSPClient是一款简单、稳定、高效、易用的RTSPClient工具，支持Windows、Linux、ARM、Android、iOS等几乎所有平台，支持RTP Over TCP/UDP，支持断线重连，能够接入市面上99%以上的IPC，调用简单且成熟稳定！

EasyRTSPClient is an elegant, simple, high performance & high compatibility RTSP Client Utility,can use in RTSP Player,NVR,RTSP Relay,EasyRTSPClient can run in any platform ,such as x68/x64/Windows/Linux/Android/iOS/arm etc..,with flexible interface,EasyRTSPClient can fit almost all network IPCamera,very easy to use.

#### &copy;	EasyRTMPClient
EasyRTMPClient是一款简单、稳定、高效、易用的RTMPClient工具库，支持Windows、Linux、ARM、Android、iOS等几乎所有平台，支持断线重连，能够接入市面上99%以上的RTMP源（RTMP服务器、CDN），调用简单且成熟稳定！


Streaming media sdk tool：An elegant, simple, high performance & high compatibility RTMP Client Utility,can use in RTMP Player,CDN,RTMP Relay,EasyRTMPClient can run in any platform ,such as x68/x64/Windows/Linux/Android/iOS/arm etc..,with flexible interface,EasyRTMPClient can fit almost all network RTMP Server、CDN,very easy to use.

#### &copy;	EasyRTSPServer
EasyRTSPServer是一款功能丰富且精炼的RTSPServer服务组件，性能高效、稳定、易定制，能够有效地应用于工业摄像机、智能机器人、流媒体服务器等设备，能够快速地帮助用户解决RTSP流媒体服务场景的需求。

#### &copy;	EasyOnvifClient
Full support for ONVIF specification, compatible with ONVIF Profile S, ONVIF Profile G, ONVIF Profile C, ONVIF Profile T, ONVIF Profile A and ONVIF Profile A, support device discovery, device management, media management, image settings, PTZ management, recording control, recording search, recording replay, video analytics, event management, media services 2, access control, door control, device IO, thermal, credential, access rules, schedule and receiver services. Happytime ONVIF Client supports video standards H265, H264, MJPEG and MPEG-4 as well as audio standards G.711, G.722, G.726, OPUS and AAC. The ONVIF client library supports multiple platforms, including windows, linux, mac, ios, etc. It supports cross-compilation and can be easily ported to embedded systems for video surveillance systems and network video recording (NVR) devices.  Full support for the ONVIF specification Compatible with ONVIF Profile S, G, C, Q, A Support H265 / H264 / MJPEG / MPEG-4 video decoding Support RTSP audio back channel Support RTSP metadata stream.

#### &copy;	EasyGBD
EasyGBD是GB/T28181 Device的简称，是国标GB28181协议的设备端，EasyGBD支持Windows、Linux、Android、iOS、ARM全部平台，EasyGBD兼容国标GB28181-2011、GB28181-2016全部功能。

### 四、硬件

- EasyRTMPLive推流硬件；
- 推流摄像机；
- IPC模拟器：支持RTSP模拟、GB28181模拟；

### ✈ 更多视频解决方案资源汇总

- 流媒体技术：<br/>
© EasyDarwin开源流媒体服务器：<a href="http://www.easydarwin.org" target="_blank" title="EasyDarwin开源流媒体服务器">http://www.easydarwin.org</a><br/>
© TSINGSEE视频开放平台：<a href="http://open.tsingsee.com" target="_blank" title="TSINGSEE青犀视频开放平台">http://open.tsingsee.com</a><br/>

- 视频云服务：<br/>
© EasyDSS互联网视频云服务：<a href="http://www.easydss.com" target="_blank" title="EasyDSS互联网视频云服务">http://www.easydss.com</a><br/>
© EasyCVR安防视频云服务：<a href="http://www.easycvr.com" target="_blank" title="EasyCVR安防视频云服务">http://www.easycvr.com</a><br/>
© EasyGBS国标视频云服务：<a href="http://www.easygbs.com" target="_blank" title="EasyGBS国标视频云服务">http://www.easygbs.com</a><br/>
© EasyRTC在线视频会议平台：<a href="http://www.easyrtc.cn" target="_blank" title="EasyRTC在线视频会议平台">http://www.easyrtc.cn</a><br/>
© EasyRTS即时通信云服务：<a href="http://www.easyrts.com" target="_blank" title="EasyRTS即时通信云服务">http://www.easyrts.com</a><br/>

- 边缘计算：<br/>
© EasyNVR视频边缘计算网关：<a href="http://www.easynvr.com" target="_blank" title="EasyNVR视频边缘计算网关">http://www.easynvr.com</a><br/>
© EasyNTS上云网关：<a href="http://www.easynts.com" target="_blank" title="EasyNTS上云网关">http://www.easynts.com</a><br/>

© TSINGSEE Team：<a href="http://www.tsingsee.com" target="_blank" title="青犀TSINGSEE">http://www.tsingsee.com</a><br/>
![青犀TSINGSEE](https://imgconvert.csdnimg.cn/aHR0cDovL3d3dy5lYXN5ZGFyd2luLm9yZy9wdWJsaWMvaW1hZ2VzL3RzaW5nc2VlX3FyY29kZV8xNjAuanBn?x-oss-process=image/format,png)
