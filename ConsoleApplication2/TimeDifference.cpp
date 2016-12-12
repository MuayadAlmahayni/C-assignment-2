#include "TimeDifference.h"

TimeDifference::TimeDifference()
{
}


TimeDifference::TimeDifference(string Start, string End)
{
	date1 = Start;
	date2 = End;
}


TimeDifference::~TimeDifference()
{
}

void TimeDifference::getdate()
{
	istringstream iss2(date1);
	char dump;
	iss2 >> day1 >> dump >> month1 >> dump >> year1 >> hour1 >> dump >> minute1;

	istringstream iss3(date2);
	char dump2;
	iss3 >> day2 >> dump2 >> month2 >> dump2 >> year2 >> hour2 >> dump2 >> minute2;

	day1 = day1 * 1440;
	month1 = month1 * 34800;
	year1 = year1 * 525600;
	hour1 = hour1 * 60;

	day2 = day2 * 1440;
	month2 = month2 * 34800;
	year2 = year2 * 525600;
	hour2 = hour2 * 60;


	if ((day2 + month2 + year2+ hour2 + minute2) >= (day1 + month1 + year1 + hour1 + minute1))

		cout << "Time difference in minutes: " << (day2 + month2 + hour2 + minute2) - (day1 + month1 + hour1 + minute1) << '\n'<< endl;

	else cout << "Dates given are incorrect" << '\n' << endl;



}