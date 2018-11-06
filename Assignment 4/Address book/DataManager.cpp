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
	writeDatafile();
}

vector<string> splitString(const string &text, char sep) {

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

}

auto DataManager::readDataFile(){
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
	}
	input.close();
}

/*
Not sure what to do with this yet

string fileInput("data.txt") {
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
	}
	input.close();
}
*/
