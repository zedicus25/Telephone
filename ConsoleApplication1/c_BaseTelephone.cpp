#include "c_BaseTelephone.h"
#include <iostream>
c_BaseTelephone::c_BaseTelephone()
{
	this->name = nullptr;
	this->model = nullptr;
}

c_BaseTelephone::c_BaseTelephone(const char* name, const char* model)
{
	this->name = new char [strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}
