#pragma once
#include <iostream>
#include <string>
#include <array>
#include "degree.h"
using namespace std;

class Student
{
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysUntilCompletion[3];
	DegreeProgram degreeProgram;

public:
	string get_studentID();
	string get_firstName();
	string get_lastName();
	string get_emailAddress();
	int get_age();
	int* get_daysUntilCompletion();
	DegreeProgram get_degreeProgram();

	void set_studentID(string studentID)
	{
		this->studentID = studentID;
	}
	void set_firstName(string firstName)
	{
		this->firstName = firstName;
	}
	void set_lastName(string lastName)
	{
		this->lastName = lastName;
	}
	void set_emailAddress(string emailAddress)
	{
		this->emailAddress = emailAddress;
	}
	void set_age(int age)
	{
		this->age = age;
	}
	void set_daysUntilCompletion(int* daysUntilCompletion);
	void set_DegreeProgram(DegreeProgram degreeProgram)
	{
		this->degreeProgram = degreeProgram;
	}
	Student() {}
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysUntilCompletion, DegreeProgram degreeProgram)
	{
		this->studentID = studentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;
		this->daysUntilCompletion[0] = daysUntilCompletion[0];
		this->daysUntilCompletion[1] = daysUntilCompletion[1];
		this->daysUntilCompletion[2] = daysUntilCompletion[2];
		this->degreeProgram = degreeProgram;
	}
	void print();
};

