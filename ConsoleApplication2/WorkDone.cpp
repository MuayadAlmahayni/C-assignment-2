#include "WorkDone.h"


WorkDone::WorkDone(string Name, string Note, string Start, string End)
	: name(Name), note(Note), TimeAllocation(Start, End), timed1(Start), timed2(End)
{
}


WorkDone::~WorkDone()
{
}

string WorkDone::details() {

	ostringstream oss;
	oss << name << ":" << "\n"
		<< "Description: " << note << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n" << endl;
	return oss.str();
}

std::string WorkDone::output()
{
	std::cout << details();
	TimeDifference difference(timed1, timed2);
	difference.getdate();
	return "This is for WorkDone";
}