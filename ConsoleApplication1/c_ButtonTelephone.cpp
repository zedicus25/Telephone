#include "c_ButtonTelephone.h"

std::ostream& operator<<(std::ostream& out, const c_ButtonTelephone& tel)
{
	out << "Name: " << tel.name << "\tModel: " << tel.model << "\n";
	for (int i = 1; i <= 11; i++)
	{
		for (int j = 1; j <= 11; j++)
		{
			if (i > 1 && i < 11 && j>1 && j < 11)
			{
				out << " ";
			}
			else
			{
				out << "*";
			}
		}
		out << "\n";
	}
	for (int i = 1; i < strlen(tel.buttons) + 1; i++)
	{
		out << tel.buttons[i - 1] << "    ";
		if (i % 3 == 0) {
			out << "\n";
		}
	}
	return out;
}

std::istream& operator>>(std::istream& in, c_ButtonTelephone& tel)
{
	in >> tel.name;
	in >> tel.model;
	in >> tel.buttons;
	return in;
}

c_ButtonTelephone::c_ButtonTelephone() : c_BaseTelephone()
{
	this->buttons = new char[strlen("123456789*0#") + 1];
	strcpy_s(this->buttons, strlen("123456789*0#") + 1, "123456789*0#");
}

c_ButtonTelephone::c_ButtonTelephone(const char* name, const char* model, const char* buttons) : c_BaseTelephone(name, model)
{
	this->buttons = new char[strlen(buttons) + 1];
	strcpy_s(this->buttons, strlen(buttons) + 1, buttons);
}

