#include "Employee.h"

Employee::Employee(int empNo, string firstName, string lastName, int yearsOfService)
{
	this->empNo = empNo;
	this->firstName = firstName;
	this->lastName = lastName;
	this->yearsOfService = yearsOfService;
}

void Employee::setEmpNo(int n)
{
	empNo = n;
}

void Employee::setLastName(string l)
{
	lastName = l;
}

void Employee::setFirstName(string f)
{
	firstName = f;
}

void Employee::setYearsOfService(int y)
{
	yearsOfService = y;
}

int Employee::getEmpNo()
{
	return empNo;
}

string Employee::getLastName()
{
	return lastName;
}

string Employee::getFirstName()
{
	return firstName;
}

int Employee::getYearsOfService()
{
	return yearsOfService;
}

void Employee::print()
{
	cout << "Employee Number: ";
	cout << empNo << endl;
	cout << "Name: ";
	cout << firstName << " " << lastName << endl;
	cout << "Years of Service: " << yearsOfService << endl << endl;
}

Employee::Employee()
{

}

//This user method works by entering the new employee number and assign it to empNo, same with firstName, LastName, and years so the method addToList can write that to the Employees txt file and then to the LinkedList
void Employee::user()
{
	string inputString;
	int intNumber;

	cout << "Employee Number ";
	cin >> intNumber;
	while (intNumber <= 0)
	{
		cout << "Employee Number ";
		cin >> intNumber;
	}
	empNo = intNumber;

	cout << "Last Name: ";
	cin >> inputString;
	lastName = inputString;

	cout << " First Name: ";
	cin >> inputString;
	firstName = inputString;

	cout << "Years of Service: ";
	cin >> intNumber;
	while (intNumber < 0)
	{
		cout << "Years of Service ";
		cin >> intNumber;

	}
	cout << endl;
	yearsOfService = intNumber;

}

bool Employee::operator==(const Employee &right)
{
	bool status;
	if (empNo == right.empNo)
		status = true;
	else
		status = false;
	return status;
}

bool Employee::operator!=(const Employee &right)
{
	bool status;

	if (empNo != right.empNo)
		status = true;
	else
		status = false;
	return status;
}
