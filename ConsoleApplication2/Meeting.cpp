#include "Meeting.h"


Meeting::Meeting(string Name, string Attendees, string Start, string End)
	: name(Name), attendees(Attendees), TimeAllocation(Start, End), timed1(Start), timed2(End)
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
	TimeDifference difference(timed1, timed2);
	difference.getdate();
	return "This is for Meeting";
}