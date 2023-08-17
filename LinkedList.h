#pragma once
#ifndef LINKEDLIST
#define EMPLOYEELIST
#include<iostream>
#include<string>
#include "Employee.h"

//Creating an sturcture Node that will house Employee type objects
struct Node {
	Employee emp;
	Node* next;

	Node(Employee data) {
		emp = data;
		next = nullptr;
	}
};

class LinkedList
{
public:
	int count = 0;
	Node* newNode;
	LinkedList();
	~LinkedList();
	//methods
	//adds an Employee to the top of the list
	void ADD(Employee a);
	//deletes the Employee according to the empNum entered on the deleteFromList method
	bool DELETE(Employee d);
	//returns the count variable updated in the ADD and DELETE methods
	int COUNT();
	//prints the objects using the EMployee method print()
	void PRINT();
	
};
#endif // !LINKEDLIST
