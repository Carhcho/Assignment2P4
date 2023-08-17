// Assignment2.cpp : Cesar Roncancio
//
#include "Employee.h"
#include "LinkedList.h"
#include <iostream>
#include <fstream>
using namespace std;

void readFile(LinkedList&);
void addToList(LinkedList&);
void deleteFromList(LinkedList&);

int main()
{
    LinkedList employeeList;
    readFile(employeeList);
    
    cout << "Printing the Employee List:" << endl;
    employeeList.PRINT();
    cout << "Current number of employees on the list:" << endl;
    employeeList.COUNT();
    cout << "Adding a new employee:" << endl;
    addToList(employeeList);
    cout << "Updated Employee List:" << endl;
    employeeList.PRINT();
    cout << "Current number of employees on the list:" << endl;
    employeeList.COUNT();
    cout << "Removing an employee:" << endl;
    deleteFromList(employeeList);
    cout << "Updated Employee List:" << endl;
    employeeList.PRINT();
    cout << "Current number of employees on the list:" << endl;
    employeeList.COUNT();
    
}
//this method uses ifstream to read from the Employees txt file and then uses the setters on the Employee class to create the object newEmp and finaly adds it to the LinkedList with the ADD method
//and does this for every line on the original Employees txt
void readFile(LinkedList& employeeList) {
    int empNum, years;
    string firstName, lastName;
    Employee newEmp;
    ifstream input;

    input.open("Employees.txt");

    while (input) {
        input >> empNum >> firstName >> lastName >> years;
        if (input) {
            newEmp.setEmpNo(empNum);
            newEmp.setFirstName(firstName);
            newEmp.setLastName(lastName);
            newEmp.setYearsOfService(years);
            employeeList.ADD(newEmp);  
        }
    }
    input.close();
}
//this method creates a Employee object newEmp uses the user() method to assign the empNo, firstName, LastName, YearsOfService and the uses ADD to add the newEmp to the LinkedList
void addToList(LinkedList& employeeList) {
    Employee newEmp;
    newEmp.user();
    employeeList.ADD(newEmp);
}
//this method uses the setEmpNo() setter method to assign the removedEmp object the empNum the user entered and then uses DELETE to remove it and assigns the true or false value to done to see if the empNo was found and the deletion performed.
void deleteFromList(LinkedList& employeeList) {
    Employee removedEmp;
    int empNum;
    bool done;
    cout << "Enter the Employee Number of the employee to remove: " << endl;
    cin >> empNum;
    removedEmp.setEmpNo(empNum);
    done = employeeList.DELETE(removedEmp);

    if (done == true) {
        cout << "Employee removed" << endl;
    }
    else {
        cout << "Invalid Employee Number" << endl;
    }
}