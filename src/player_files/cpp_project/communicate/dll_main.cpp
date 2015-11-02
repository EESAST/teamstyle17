// ���� dll ��������

#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "communicate.h"

#ifdef _WIN32
#define DLLEXPORT extern "C" __declspec(dllexport)
#else
#define DLLEXPORT extern "C"
#endif

extern int AI_ID;

void AIMain();

DLLEXPORT void StartAI(ComFuncType communicate, int ai_id) {
	// ���������� ai

	AI_ID = ai_id;
	Communicate = communicate;

	while (true) {
		AIMain();   // Start AI
	}
	_sleep(100);
}
