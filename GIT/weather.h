#ifndef WEATHER_H
#define WEATHER_H

#include "constants.h"

struct date
{
	int day;
	int month;
};


struct weather
{
	date date;
	int precepitation;
	char type[MAX_STRING_SIZE];
};

#endif
