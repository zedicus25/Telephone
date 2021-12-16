#include "c_Contact.h"
#include <iostream>
c_Contact::c_Contact()
{
	this->name = new char[0];
	this->number = new char[0];
}

c_Contact::c_Contact(const char* name, const char* number)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->number = new char[strlen(number) + 1];
	strcpy_s(this->number, strlen(number) + 1, number);
}

std::istream& operator<<(std::istream& in, c_Contact& con)
{
	in >> con.name;
	in >> con.number;
	return in;
}
