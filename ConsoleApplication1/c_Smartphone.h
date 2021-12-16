#pragma once
#include <iostream>
#include "c_BaseTelephone.h"
class c_Smartphone : public c_BaseTelephone
{
protected:
	float screen_diagonal;
	int ram;
public:
	c_Smartphone() : c_BaseTelephone()
	{
		this->screen_diagonal = 0;
		this->ram = 0;
	}
	c_Smartphone(const char* name, const char* model, float diagonal, int ram) : c_BaseTelephone(name, model)
	{
		this->screen_diagonal = diagonal;
		this->ram = ram;
	}

	friend std::ostream& operator<<(std::ostream& out, const c_Smartphone& tel) {
		out << "Name: " << tel.name << "\tModel: " << tel.model <<"\tDiagonal: " << tel.screen_diagonal << 
			"\t RAM: " << tel.ram << "\n";
		return out;
	}
};

