#include "Testing.h"



Testing::Testing(string Name, string TestDescription, string Start, string End)
	: name(Name), testDescription(TestDescription), TimeAllocation(Start, End)
{
}


Testing::~Testing()
{
}

string Testing::details() {

	ostringstream oss;
	oss << name << ":" << "\n"
		<< "Test Description: " << testDescription << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n" << endl;
	return oss.str();
}

std::string Testing::output()
{
	std::cout << details();
	return "This is for Meeting";
}