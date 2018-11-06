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

	//ifstream input("data.txt");

private:
	vector<Contact> fields;
	string line;
	//vector<string> splitString() { return tokens; }
	void writeDataFile();
	auto readDataFile();
};