#pragma once
#include "c_BaseTelephone.h"
#include <iostream>
class c_ButtonTelephone : public c_BaseTelephone
{
protected:
	char* buttons;
public:
	c_ButtonTelephone() : c_BaseTelephone() {
		this->buttons = nullptr;
	}
	c_ButtonTelephone(const char* name, const char* model, const char* buttons) : c_BaseTelephone(name,model)
	{
		this->buttons = new char [strlen(buttons) + 1];
		strcpy_s(this->buttons, strlen(buttons) + 1, buttons);
	}
	
	friend std::ostream& operator << (std::ostream& out, const c_ButtonTelephone& tel) {
		out << "Name: " << tel.name << "\tModel: " << tel.model << "\tButtons: " <<tel.buttons << "\n";
		return out;
	}
};

