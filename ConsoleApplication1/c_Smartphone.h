#pragma once
#include <iostream>
#include "c_BaseTelephone.h"
class c_Smartphone : public c_BaseTelephone
{
protected:
	float screen_diagonal;
	int ram;
public:
	c_Smartphone();
	
	c_Smartphone(const char* name, const char* model, float diagonal, int ram);
	

	friend std::ostream& operator<<(std::ostream& out, const c_Smartphone& tel);


	friend std::istream& operator << (std::istream& in, c_Smartphone& tel);
};

