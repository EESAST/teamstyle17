﻿// 启动 dll 的主函数

#ifdef _WIN32

#define DLLEXPORT extern "C" __declspec(dllexport)
#include <windows.h>
#define SLEEP(x) Sleep(x)

#else
#define DLLEXPORT extern "C"
#include <unistd.h>
#define SLEEP(x) usleep((x) * 1000)

#endif

#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "communicate.h"

int AI_ID;

ComFuncType Communicate;

void AIMain();

DLLEXPORT void StartAI(ComFuncType communicate, int ai_id) {
	// 用它来启动 ai

	AI_ID = ai_id;
	Communicate = communicate;

	while (true) {
		AIMain();   // Start AI
	}
	SLEEP(100);
}
