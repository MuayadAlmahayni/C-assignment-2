#pragma once
#include "DateTime.h"
class TimeDifference
{
public:
	TimeDifference();
	TimeDifference(string, string);
	~TimeDifference();
	std::string date1;
	std::string date2;
	void getdate();

	int minute1;
	int hour1;
	int day1;
	int month1;
	int year1;

	int minute2;
	int hour2;
	int day2;
	int month2;
	int year2;
};

