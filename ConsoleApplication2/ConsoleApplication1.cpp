#pragma once
#include "TimeAllocation.h"
#include "Project.h"
#include "Meeting.h"
#include "WorkDone.h"
#include "BugFix.h"
#include "Testing.h"
#include <iostream>
#include <string>


int main() {
	while (1)
	{
		std::fstream fs;
		bool fileLoaded = false;
		while (!fileLoaded)
		{
			std::string filePath;
			cout << "Enter full file path:" << '\n' << endl;
			getline(cin, filePath);
			fs = std::fstream(filePath, std::fstream::in);
			std::string test;

			if (!fs.is_open()) {
				cout << '\n' << "Incorrect directory, or file does not exist." << '\n' << endl;
			}
			else {
				cout << "File Opened successfully." << '\n' << endl;
				fileLoaded = true;
			}
		}
		std::string name, description, start, end, compare;

		cout << '\n' << "======== C++ Application Assignment ========" << '\n' << endl;

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

		compare = "";

		do {
			char ch = fs.get();
			compare += ch;

			if (compare == "BugFix")
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

				BugFix bugfix(name, description, start, end);
				bugfix.output();
			}
		} while (compare != "BugFix");

		compare = "";

		do {
			char ch = fs.get();
			compare += ch;

			if (compare == "Testing")
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

				Testing testing(name, description, start, end);
				testing.output();

			}
		} while (compare != "Testing");

		cout << "===============================================" << '\n' << endl;


		//std::vector<TimeAllocation*> timeAllocations;

		//for (auto i : timeAllocations)
		//{
			//i.output();
		//}

	}

}