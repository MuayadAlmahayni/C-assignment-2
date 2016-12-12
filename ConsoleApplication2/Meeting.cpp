#include "Meeting.h"


Meeting::Meeting(string Name, string Attendees, string Start, string End)
	: name(Name), attendees(Attendees), TimeAllocation(Start, End)
{

}


Meeting::~Meeting()
{
}

string Meeting::details() {
	
	ostringstream oss;
	oss << name << ":" << "\n"
		<< "Attendees: " << attendees << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n" << endl;
	return oss.str();
}

std::string Meeting::output()
{
	std::cout << details();
	return "This is for Meeting";
}