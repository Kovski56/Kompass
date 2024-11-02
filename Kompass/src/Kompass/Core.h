#pragma once

#ifdef KP_PLATFORM_WINDOWS
	#ifdef KP_BUILD_DLL
		#define KOMPASS_API __declspec(dllexport)
	#else
		#define KOMPASS_API __declspec(dllimport)
	#endif
#else
	#error Kompass only supports Windows!
#endif