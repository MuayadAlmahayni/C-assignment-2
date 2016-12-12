#pragma once
#include "TimeAllocation.h"
#include "Project.h"
#include "Meeting.h"
#include "WorkDone.h"
#include <iostream>
#include <string>


int main() {

	string filePath;
	cout << "Enter file path:" << endl;
	std::cin >> filePath;
	std::fstream fs(filePath, std::fstream::in);
	std::string test;

	if (!fs.is_open()) {
		cout << "Incorrect directory, or file does not exist." << endl;
	}
	else {
		cout << "File Opened successfully." << endl;
		 }

	std::string name, description, start, end, compare;

	cout << '\n' << "===== C++ Application Assignment =====" << '\n' << endl;

	do {
		char ch = fs.get();
		compare += ch;

		if (compare == "Project")
		{
			std::string line;

			getline(fs, line, '#');
			name = compare;

			getline(fs, line, '#');
			description = line;

			getline(fs, line, '#');
			start = line;

			getline(fs, line, '\n');
			end = line;

			Project project(name, description, start, end);
			project.output();
		}
	} while (compare != "Project");

	compare = "";

	do {
		char ch = fs.get();
		compare += ch;

		if (compare == "Meeting")
		{
			std::string line;

			getline(fs, line, '#');
			name = compare;

			getline(fs, line, '#');
			description = line;

			getline(fs, line, '#');
			start = line;

			getline(fs, line, '\n');
			end = line;

			Meeting meeting(name, description, start, end);
			meeting.output();
			
		}
	} while (compare != "Meeting");

	compare = "";

	do {
		char ch = fs.get();
		compare += ch;

		if (compare == "WorkDone")
		{
			std::string line;

			getline(fs, line, '#');
			name = compare;

			getline(fs, line, '#');
			description = line;

			getline(fs, line, '#');
			start = line;

			getline(fs, line, '\n');
			end = line;

			WorkDone workdone(name, description, start, end);
			workdone.output();
		}
	} while (compare != "WorkDone");

	std::string str1;
	cin >> str1;




	//std::vector<TimeAllocation*> timeAllocations;

	//for (auto i : timeAllocations)
	//{
		//i.output();
	//}

	

	return 0;
}