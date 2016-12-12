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

private:
	string location;
	string attendees;
};

