#include "pch.h"
#include "Contact.h"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

Contact::Contact()
{
	this->firstName = "Unkown";
	this->lastName = "Unkown";
	this->email = "Unkown";
	this->phoneNumber = "Unkown";
}


Contact::~Contact()
{
}


Contact::Contact(string firstName, 
	string lastName, string email, 
	string phoneNumber) :
	firstName(firstName),
	lastName(lastName),
	email(email),
	phoneNumber(phoneNumber)
{ }

void Contact::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

void Contact::setEmail(string email) {
	this->email = email;
}

void Contact::setPhoneNumber(string phoneNumber) {
	if (phoneNumber.size() <= 15) {
		this->phoneNumber = phoneNumber;
	}
}

// Still working on what to put here
string Contact::Display() {

	ostringstream output;

	output << left << setw(15) << firstName;
	output << setw(15) << lastName;
	output << setw(20) << email;
	output << right << setw(15) << phoneNumber;
	output << endl;

	return output.str();
}