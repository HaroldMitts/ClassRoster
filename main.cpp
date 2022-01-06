#include <iostream>
#include "roster.h"
#include "student.h"
using namespace std;

Student* parse(string student) {
	size_t rhs = student.find(",");
	string studentID = student.substr(0, rhs);
	
	size_t lhs = rhs + 1;
	rhs = student.find(",", lhs);
	string firstName = student.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	string lastName = student.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	string emailAdress = student.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int age = stoi(student.substr(lhs, rhs - lhs)); 
	
	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int daysUntilCompletion1 = stoi(student.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int daysUntilCompletion2 = stoi(student.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int daysUntilCompletion3 = stoi(student.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	string strdegreeProgram = student.substr(lhs, rhs - lhs);

	DegreeProgram degreeProgram = DegreeProgram::NETWORK;
	if (strdegreeProgram == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (strdegreeProgram == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}
	int daysUntilCompletion[] = { daysUntilCompletion1,daysUntilCompletion2,daysUntilCompletion3 };
	return new Student(studentID, firstName, lastName, emailAdress, age, daysUntilCompletion, degreeProgram);
}

int main() {
	void print();
	{
		cout << "Scripting and Programming - Applications - C867" << endl;
		cout << "Created with C++ and Visual Studio" << endl;
		cout << "Student ID: 001310194" << endl;
		cout << "Student Name: Harold Mitts, Jr" << endl;
		cout << "Email: hmittsj@wgu.edu" << endl << endl;
	}

	const string studentData[5] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Harold,Mitts,hmittsj@wgu.edu,53,40,60,90,SOFTWARE"
	};

	Roster classRoster;

	for (int i = 0; i < 5; i++) {
		classRoster.classRosterArray[i] = parse(studentData[i]);
	}
	
	classRoster.printAll();
	classRoster.printInvalidEmails();

	for (int i = 0; i < 5; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->get_studentID());
	}
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.printAll();
	classRoster.remove("A3");
}