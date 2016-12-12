#include "Project.h"


Project::Project(string Name, string Description, string Start, string End)
	: name(Name), description(Description), TimeAllocation(Start, End)
{
}


Project::~Project()
{
}

string Project::details() {

	ostringstream oss;
	oss << "Name: " << name << "\n"
		<< "Description: " << description << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n";
	return oss.str();
}

std::string Project::output()
{
	std::cout << details();
	return "This is for Project";
}