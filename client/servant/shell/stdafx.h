// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  从 Windows 头文件中排除极少使用的信息
// Windows 头文件:
#include <windows.h>



// TODO: 在此处引用程序需要的其他头文件
#include "CommonHeader.h"
#include "ConfigInfo.h"
#include "CommNames.h"

extern CONNECT_INFO g_ConfigInfo;
extern SERVICE_INFO g_ServiceInfo;
extern HMODULE		g_hServantshell;

extern tstring		g_locationDir;
extern FILETIME		g_ftLocationDirCreationTime;
extern FILETIME		g_ftLocationDirLastAccessTime;
extern FILETIME		g_ftLocationDirLastWriteTime;
