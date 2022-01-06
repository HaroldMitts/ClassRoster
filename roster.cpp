#include "roster.h"
#include <iostream>
using namespace std;

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysUntilCompletion)
{
	for (int i=0; i < 5; i++) {
		if (classRosterArray[i] == nullptr) {
			classRosterArray[i] = new Student();
			classRosterArray[i]->set_studentID(studentID);
			break;
		}
	}
}

void Roster::remove(string studentID)
{
	for (int i = 0; i < 5; i++) {
		if ((classRosterArray[i] != nullptr) && (studentID == classRosterArray[i]->get_studentID())) {
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			return;
		}
	}
	cout << studentID << " <-Student ID not found." << endl;
}

void Roster::printAll()
{
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->print();
		}
	}
}

void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < 5; i++) {
		if (studentID == classRosterArray[i]->get_studentID()) {
			int* days = classRosterArray[i]->get_daysUntilCompletion();
			int average = (days[0] + days[1] + days[2]) / 3;
			cout << studentID << '\t' << "Course Average: " << average << endl;
		}
	}
}

void Roster::printInvalidEmails()
{
	for (int i = 0; i < 5; i++) {
		string email = classRosterArray[i]->get_emailAddress();
		if (email.find('@') == string::npos) {
			cout << email << endl;
		}
		else if (email.find('.') == string::npos) {
			cout << email << endl;
		}
		else if (email.find(' ') != string::npos) {
			cout << email << endl;
		}
	} cout << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	for (int i = 0; i < 5; i++)
	{
		if (degreeProgram == classRosterArray[i]->get_degreeProgram())
			classRosterArray[i]->print();
	}
}

Roster::~Roster()
{
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != nullptr) {
			delete classRosterArray[i];
		}
	}
}