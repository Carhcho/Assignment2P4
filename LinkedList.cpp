#include "LinkedList.h"

LinkedList::LinkedList()
{
	newNode = nullptr;
	count = 0;
}

LinkedList::~LinkedList()
{
	Node* ptr;
	while (newNode != nullptr)
	{
		ptr = newNode;
		newNode = newNode->next;
		delete ptr;
	}
}
//The ADD method will create an ADDNode with the employee object and adds it at the top of the linkedList
void LinkedList::ADD(Employee a)
{
	Node* ADDNode;
	ADDNode = new Node(a);
	ADDNode->next = newNode;
	newNode = ADDNode;

	count++;
}
//uses tempNode and a temp node with a counter to check that the entered empNo exists on the list and then skips it to "remove it" from the LinkedList and then reduces count to make sure the method COUNT knows how many elements are still on the list
bool LinkedList::DELETE(Employee d)
{
	Node* tempNode = newNode;
	Node* temp;

	int counter = 1;

	if (d == newNode->emp)
	{
		temp = tempNode;
		newNode = newNode->next;

		count--;
		return true;

	}
	else
	{

		while (d != tempNode->next->emp)
		{
			tempNode = tempNode->next;
			counter++;

			if (tempNode->next == nullptr)
				throw string("Null value");
		}


		if (d == tempNode->next->emp)
		{
			temp = tempNode->next;
			tempNode->next = tempNode->next->next;
			delete temp;
			count--;
			return true;
		}
	}
}
//Returns the number of employees currently on the list
int LinkedList::COUNT()
{
	cout << "#: " << count << endl;
	return count;
}
//uses a counter to print all employees in the LinkedList
void LinkedList::PRINT()
{
	int counter = 1;
	Node* tempNode = newNode;

	cout << endl << "Employees: " << endl << endl;

	while (counter <= count)
	{
		tempNode->emp.print();
		tempNode = tempNode->next;
		counter++;
	}
}
