#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using std::string;

class Contact
{
public:
	Contact();
	~Contact();
	Contact(string firstName, string lastName, string email, string phoneNumber);

	string getFirstName() { return firstName; }
	void setFirstName(string);
	
	string getLastName() { return lastName; }
	void setLastName(string);

	string getEmail() { return email; }
	void setEmail(string);

	string getPhoneNumber() { return phoneNumber; }
	void setPhoneNumber(string);

	
	string Display();


private:
	string firstName;
	string lastName;
	string email;
	string phoneNumber;
	string output;
};

#endif // !CONTACT_H