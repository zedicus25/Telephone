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

	void call(char const* number);

	friend std::ostream& operator<<(std::ostream& out, const c_BaseTelephone& tel);

	friend std::istream& operator>>(std::istream& in, c_BaseTelephone& tel);
};

