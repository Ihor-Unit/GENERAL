#include "FPS.h"

#include <string>
#include <Windows.h>
#include <strsafe.h>


int FPS::m_FPS = 0;
int FPS::m_FPSCount = 0;
FPS::Time FPS::m_Last = Clock::now();

FPS::FPS()
{
	if (m_FPSCount == 0) {
		m_Last = Clock::now();
	}
}

FPS::~FPS()
{
	++m_FPSCount;

	if (ElapsedSeconds() >= 1)
	{
		m_FPS = m_FPSCount;
		m_FPSCount = 0;
	}

	TCHAR  szbuff[255];
	StringCchPrintf(szbuff, 255, TEXT("FPS: %d"), m_FPS);
	SetConsoleTitle(szbuff);
}

int FPS::ElapsedSeconds()
{
	Time now = Clock::now();
	return std::chrono::duration_cast<std::chrono::seconds>(now - m_Last).count();
}
