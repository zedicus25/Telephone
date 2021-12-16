#pragma once
#include "c_BaseTelephone.h"
#include <iostream>
class c_ButtonTelephone : public c_BaseTelephone
{
protected:
	char* buttons;
public:
	c_ButtonTelephone() : c_BaseTelephone() {
		this->buttons = new char[strlen("123456789*0#") + 1];
		strcpy_s(this->buttons, strlen("123456789*0#") + 1, "123456789*0#");
	}
	c_ButtonTelephone(const char* name, const char* model, const char* buttons) : c_BaseTelephone(name,model)
	{
		this->buttons = new char [strlen(buttons) + 1];
		strcpy_s(this->buttons, strlen(buttons) + 1, buttons);
	}
	
	friend std::ostream& operator << (std::ostream& out, const c_ButtonTelephone& tel);
		


	friend std::istream& operator >>(std::istream& in, c_ButtonTelephone& tel);
		
	
};

