#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
	int empNo = 0;
	string lastName;
	string firstName;
	int yearsOfService = 0;
	//constructor
	Employee(int empNo, string firstName, string lastName, int yearsOfService);
	//setters
	void setEmpNo(int n);
	void setLastName(string l);
	void setFirstName(string f);
	void setYearsOfService(int y);
	//getters
	int getEmpNo();
	string getLastName();
	string getFirstName();
	int getYearsOfService();
	//print method for employee objects
	void print();
	//default constructor
	Employee();
	//the user method is created to be able to write the employee object in the Employees txt file
	void user();

	//here we are overloading these two operators == and != so the compilator know how to compare two employee objects types
	bool operator == (const Employee&);
	bool operator != (const Employee&);
};

