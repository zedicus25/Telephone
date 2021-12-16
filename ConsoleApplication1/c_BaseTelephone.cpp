#include "c_BaseTelephone.h"
#include <iostream>
c_BaseTelephone::c_BaseTelephone()
{
	this->name = new char[0];
	this->model = new char[0];
}

c_BaseTelephone::c_BaseTelephone(const char* name, const char* model)
{
	this->name = new char [strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}

void c_BaseTelephone::call(char const* number)
{
	std::cout << "Start call\n";
	srand(time(NULL));
	int r = 1 + rand() % 9;
	if (r >= 5) {
		std::cout << "Your call successful\n";
	}
	else if (r < 5) {
		std::cout << "Your call not successful\n";
	}

	if (r == 6) {
		std::cout << "Your money stolen)\n";
	}
}

std::ostream& operator<<(std::ostream& out, const c_BaseTelephone& tel)
{
	out << "Name: " << tel.name << "\tModel: " << tel.model << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_BaseTelephone& tel)
{
	in >> tel.name;
	in >> tel.model;
	return in;
}
