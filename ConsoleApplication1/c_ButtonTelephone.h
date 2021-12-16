#pragma once
#include "c_BaseTelephone.h"
#include <iostream>
class c_ButtonTelephone : public c_BaseTelephone
{
protected:
	char* buttons;
public:
	c_ButtonTelephone();
	
	c_ButtonTelephone(const char* name, const char* model, const char* buttons);
	
	
	friend std::ostream& operator << (std::ostream& out, const c_ButtonTelephone& tel);
		
	friend std::istream& operator >>(std::istream& in, c_ButtonTelephone& tel);
};

