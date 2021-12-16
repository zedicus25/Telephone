#include "c_Smartphone.h"

std::ostream& operator<<(std::ostream& out, const c_Smartphone& tel)
{
	out << "Name: " << tel.name << "\tModel: " << tel.model << "\tDiagonal: " << tel.screen_diagonal 
         << "\tRAM: " << tel.ram << "\n";
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            if (i > 1 && i < 30 && j>1 && j < 30)
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
	return out;
}

std::istream& operator<<(std::istream& in, c_Smartphone& tel)
{
    in.clear();
	in >> tel.name;
	in >> tel.model;
	in >> tel.screen_diagonal;
	in >> tel.ram;
	return in;
}

c_Smartphone::c_Smartphone() : c_BaseTelephone()
{
    this->screen_diagonal = 0;
    this->ram = 0;
}

c_Smartphone::c_Smartphone(const char* name, const char* model, float diagonal, int ram) : c_BaseTelephone(name,model)
{
    this->screen_diagonal = diagonal;
    this->ram = ram;
}
