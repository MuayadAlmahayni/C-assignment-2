#pragma once
#include "TimeAllocation.h" 
class BugFix:
	public TimeAllocation
{
public:
	BugFix(string, string, string, string);
	~BugFix();
	string name;
	string fixNote;
	string BugFix::details();
	string BugFix::output();
	string timed1;
	string timed2;
};

