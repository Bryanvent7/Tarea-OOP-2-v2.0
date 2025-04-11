// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here

// Aísla los includes nativos
#pragma managed(push, off)
// Evita la definición conflictiva de IServiceProvider
#define __IServiceProvider_INTERFACE_DEFINED__
#include <windows.h>
#include <mmsystem.h>
#pragma managed(pop)
#pragma comment(lib, "winmm.lib")



#endif //PCH_H
