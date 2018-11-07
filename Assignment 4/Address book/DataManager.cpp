#include "pch.h"
#include "DataManager.h"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

DataManager::DataManager()
{
	readDataFile();
}


DataManager::~DataManager()
{
	writeDataFile();
}

vector<string> DataManager::splitString(const string &text, char sep) {

	vector<string> tokens;
	istringstream ss(text);
	string field;

	while (getline(ss, field, sep))
	{
		tokens.push_back(field);
	}

	return tokens;
}

void DataManager::writeDataFile() {
	ofstream output("data.txt");

	for (size_t i = 0; i < fields.size(); i++) {
		Contact temp = fields[i];

		output << temp.getFirstName() << "\t";
		output << temp.getLastName() << "\t";
		output << temp.getEmail() << "\t";
		output << temp.getPhoneNumber() << "\t";
		output << endl;
	}

	output.close();
}

void DataManager::readDataFile(){
	ifstream input("data.txt");
	string line;
	vector<Contact> fields;

	if (input.fail())
	{
		cerr << "File not found.  Will exit..." << endl;
		exit(1);
	}

	while (!input.eof())
	{
		// get a line from the file, then split it on tab characters
		getline(input, line);
		vector<string> fieldVector = splitString(line, '\t');

		if (fieldVector.size() == 4) {
			string firstName = fieldVector[0];
			string lastName = fieldVector[1];
			string email = fieldVector[2];
			string phoneNumber = fieldVector[3];

			Contact person(firstName, lastName, email, phoneNumber);
			fields.push_back(person);
		}
	}
	input.close();
}

void DataManager::addContact(string firstName, string lastName, string email, string phoneNumber) {
	Contact newContact;

	newContact.setFirstName(firstName);
	newContact.setLastName(lastName);
	newContact.setEmail(email);
	newContact.setPhoneNumber(phoneNumber);

	fields.push_back(newContact);
}

Contact* DataManager::findContact(string email) {
	string temp = email;
	Contact tempSearch;

	for (size_t i = 0; i < fields.size(); i++) {
		tempSearch = fields[i];

		if (tempSearch.getEmail() == temp) {
			cout << endl << "Found it!" << endl;
			return &fields[i];
		}
	}
	return NULL;
}