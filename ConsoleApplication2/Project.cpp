#include "Project.h"


Project::Project(string Name, string Description, string Start, string End)
	: name(Name), description(Description), TimeAllocation(Start, End), timed1(Start), timed2(End)
{
}


Project::~Project()
{
}

string Project::details() {

	ostringstream oss;
	oss << name << ":" << "\n"
		<< "Description: " << description << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n" << endl;
	return oss.str();
}

std::string Project::output()
{
	std::cout << details();
	TimeDifference difference(timed1, timed2);
	difference.getdate();
	return "This is for Project";
}