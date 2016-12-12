#pragma once
#include "TimeAllocation.h"
#include "Project.h"
#include "Meeting.h"
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

			getline(fs, line, '#');
			end = line;

			Meeting meeting(name, description, start, end);
			meeting.output();
			std::string str1;
			cin >> str1;
		}
	} while (compare != "Meeting");




	//std::vector<TimeAllocation*> timeAllocations;

	//for (auto i : timeAllocations)
	//{
		//i.output();
	//}

	

	return 0;
}