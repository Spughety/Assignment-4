// Address book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Contact.h"
#include "DataManager.h"
#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
	DataManager manager;

	manager.findContact("KillerPhiller@gmail.com");

	/*
	Contact tim;

	Contact timothy;
	timothy.setFirstName("Timothy");
	timothy.setLastName("Jones");
	timothy.setEmail("timothy2jones@gmail.com");
	timothy.setPhoneNumber("(207)226-3753");

	Contact timberly;
	timberly.setFirstName("Timberly");
	timberly.setLastName("Jane");
	timberly.setEmail("timberly8jane@gmail.com");
	timberly.setPhoneNumber("867-5309");

	vector<Contact> people = { tim, timothy, timberly };

	for (Contact x : people) {
		cout << x.getFirstName() << endl;
		cout << x.getLastName() << endl;
		cout << x.getEmail() << endl;
		cout << x.getPhoneNumber() << endl;
	}

	cout << timberly.Display() << endl;

	Contact item = people[0];
	Contact *thingPtr = &people[1];
	Contact &var = people[2];

	item.setFirstName("Tim");
	thingPtr->setFirstName("Jimothy");
	var.setFirstName("Jimberly");

	for (Contact x : people) {
		cout << x.getFirstName() << endl;
		cout << x.getLastName() << endl;
		cout << x.getEmail() << endl;
		cout << x.getPhoneNumber() << endl;
	}
	*/

	/*
	It only updates the pointer and refernce. Since the first one is a copy of the item.
	Because pointers and references 'point' to the original data. So you update the pointer it updates the original.
	If you print out item like below it works because it is a new copy of the tim class.
	cout << item.getFirstName() << endl;
	*/
}