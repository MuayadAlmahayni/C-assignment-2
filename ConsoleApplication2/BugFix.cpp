#include "BugFix.h"


BugFix::BugFix(string Name, string FixNote, string Start, string End)
	: name(Name), fixNote(FixNote), TimeAllocation(Start, End)
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
	return "This is for Meeting";
}