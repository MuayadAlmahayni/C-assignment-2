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

	if (!fs.is_open()) {
		cout << "Incorrect directory, or file does not exist." << endl;
	}
	else {
		cout << "File Opened successfully." << endl;
		 }

	std::string name, description, start, end, compare;

	while (fs.peek() != '#')
	{
		char ch = fs.get();
		compare += ch;

		if (compare == "Project")
		{
			std::string line;

			getline(fs, line, '#');

			std::stringstream ss;
			ss << line;

			ss >> name;
			ss >> description;
			ss >> start;
			ss >> end;

			Project project(name, description, start, end);


		}

		if (compare == "Meeting")
		{
			std::string line;

			getline(fs, line, '#');
			name = compare;

			getline(fs, line, '#');
			line = description;

			getline(fs, line, '#');
			line = start;

			getline(fs, line, '#');
			line = end;
		}

		//Meeting meeting(name, description, start, end);
		//meeting.output();

	}




	//std::vector<TimeAllocation*> timeAllocations;

	//for (auto i : timeAllocations)
	//{
		//i.output();
	//}

	

	return 0;
}