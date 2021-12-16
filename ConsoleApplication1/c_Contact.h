#pragma once
#include <iostream>
class c_Contact
{
private:
	char* name;
	char* number;
public:
	c_Contact();
	c_Contact(const char* name, const char* number);

	friend std::istream& operator << (std::istream& in, c_Contact& con);
	
};

