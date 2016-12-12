#pragma once
#include "TimeAllocation.h"
class WorkDone:
	public TimeAllocation
{
public:
	WorkDone(string, string, string, string);
	~WorkDone();
	string note;
	string name;
	string WorkDone::details();
	string WorkDone::output();
	string timed1;
	string timed2;
};

