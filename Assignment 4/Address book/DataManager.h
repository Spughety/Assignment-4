#pragma once
#include "Contact.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class DataManager
{
public:
	DataManager();
	~DataManager();

	// Add a contact to fields vector
	void addContact(string firstName, string lastName, string email, string phoneNumber);
	
	// Find a specific contact based on their email
	Contact* findContact(string email);

private:
	string firstName;
	string lastName;
	string email;
	string phoneNumber;
	vector<Contact> fields;
	string line;

	vector<string> splitString(const string &text, char sep);

	void writeDataFile();
	void readDataFile();
};