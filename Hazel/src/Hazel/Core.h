#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BULID_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
#endif // HZ_BULID_DLL
#else
#error Hazel only support Windows
#endif // HZ_PLATFORM_WINDOWS
