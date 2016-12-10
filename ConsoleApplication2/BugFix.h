#pragma once
#include "TimeAllocation.h" 
class BugFix:
	public TimeAllocation
{
public:
	BugFix();
	~BugFix();
	int ID;
	string fixNote;
};

