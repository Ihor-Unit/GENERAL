#pragma once
#include <chrono>

class FPS
{
	using Clock = std::chrono::system_clock;
	using Time = std::chrono::time_point<Clock>;

public:
	FPS();
	~FPS();

private:
	int ElapsedSeconds();

	static int m_FPS;
	static int m_FPSCount;
	static Time m_Last;
};
