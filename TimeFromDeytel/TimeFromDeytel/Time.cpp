#include "Time.h"
#include <iostream>
#include <iomanip>


Time::Time()
{
	hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printUniversal()
{
	std::cout << std::setfill('0') << std::setw(2) << hour << ":" << minute << ":" << second;
}

void Time::printStandart()
{
	std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << std::setfill('0') <<
		std::setw(2) << minute << ":" << std::setw(2) << second << ((hour < 12) ? " AM" : " PM");
}


Time::~Time()
{
}