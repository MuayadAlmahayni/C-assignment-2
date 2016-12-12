#pragma once
#include "TimeAllocation.h"

class Meeting :
	public TimeAllocation
{
public:
	Meeting(string , string , string, string);
	~Meeting();
	string details();
	std::string output();
	string timed1;
	string timed2;

private:
	string name;
	string attendees;
};

