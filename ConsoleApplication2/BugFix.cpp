#include "BugFix.h"


BugFix::BugFix(string Name, string FixNote, string Start, string End)
	: name(Name), fixNote(FixNote), TimeAllocation(Start, End), timed1(Start), timed2(End)
{
}


BugFix::~BugFix()
{
}

string BugFix::details() {

	ostringstream oss;
	oss << name << ":" << "\n"
		<< "Attendees: " << fixNote << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n" << endl;
	return oss.str();
}

std::string BugFix::output()
{
	std::cout << details();
	TimeDifference difference(timed1, timed2);
	difference.getdate();
	return "This is for BugFix";
}