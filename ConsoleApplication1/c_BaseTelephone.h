#pragma once
#include <iostream>
class c_BaseTelephone
{
protected:
	char* name;
	char* model;
public:
	c_BaseTelephone();
	c_BaseTelephone(const char* name, const char* model);

	friend std::ostream& operator<<(std::ostream& out, const c_BaseTelephone& tel) {
		out << "Name: " << tel.name << "\tModel: " << tel.model << "\n";
		return out;
	}
};

