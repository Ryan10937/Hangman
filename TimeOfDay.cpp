#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
#include "TimeOfDay.h"

using namespace std;

std::string TimeOfDay()
{
	std::string timeOfDay;

	time_t timeNow = time(NULL);
	tm *x = localtime(&timeNow);
	int hour = x->tm_hour;

	if (hour < 6)
	{
		timeOfDay = "early morning";
	}
	else if (hour < 12)
	{
		timeOfDay = "morning";
	}
	else if (hour < 18)
	{
		timeOfDay = "afternoon";
	}
	else
	{
		timeOfDay = "evening";
	}

	return timeOfDay;
}