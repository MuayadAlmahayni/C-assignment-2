#pragma once
#include "TimeAllocation.h"
class Testing :
	public TimeAllocation
{
public:
	Testing(string, string, string, string);
	~Testing();
	string details();
	std::string output();
	string name;
	string testDescription;
	string timed1;
	string timed2;
};

