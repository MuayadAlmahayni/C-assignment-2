#pragma once
#include "TimeAllocation.h"

class Project :
	public TimeAllocation
{
public:
	Project(string, string, string, string);
	~Project();
	string name;
	string description;
	std::string output();
	std::string details();

};

