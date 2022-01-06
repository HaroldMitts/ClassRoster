#pragma once
#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"
using namespace std;

class Roster
{
public:
	Student* classRosterArray[5] = { nullptr,nullptr,nullptr,nullptr,nullptr };
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysUntilCompletion); 
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);

	~Roster();
};