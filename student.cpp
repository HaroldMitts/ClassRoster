#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"
using namespace std;

void Student::set_daysUntilCompletion(int* daysUntilCompletion)
{
	this->daysUntilCompletion[0] = daysUntilCompletion[0];
	this->daysUntilCompletion[1] = daysUntilCompletion[1];
	this->daysUntilCompletion[2] = daysUntilCompletion[2];
}

void Student::print()
{ 
	cout << studentID << '\t';
	cout << "First Name: " << firstName << '\t';
	cout << "Last Name: " << lastName << '\t';
	cout << "Age: " << age << "." << '\t';
	cout << "Days In Course: {" << daysUntilCompletion[0] << ',' << daysUntilCompletion[1] << ',' << daysUntilCompletion[2] << '}' << '\t';

	if (degreeProgram == DegreeProgram::NETWORK) {
		cout << "Network" << endl;
	}
	else if (degreeProgram == DegreeProgram::SOFTWARE) {
		cout << "Software" << endl;
	}
	else if (degreeProgram == DegreeProgram::SECURITY) {
		cout << "Security" << endl;
	}
}

string Student::get_studentID()
{
	return this->studentID;
}

string Student::get_firstName()
{
	return this->firstName;
}

string Student::get_lastName()
{
	return this->lastName;
}

string Student::get_emailAddress()
{
	return this->emailAddress;
}

int Student::get_age()
{
	return this->age;
}

int* Student::get_daysUntilCompletion()
{
	return this->daysUntilCompletion;
}

DegreeProgram Student::get_degreeProgram()
{
	return this->degreeProgram;
}