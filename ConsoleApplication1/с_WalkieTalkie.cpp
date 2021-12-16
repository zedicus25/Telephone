#include "�_WalkieTalkie.h"
#include <iostream>
�_WalkieTalkie::�_WalkieTalkie() : c_BaseTelephone()
{
	this->radius_of_action = 0;
	this->frequency = 0;
}

�_WalkieTalkie::�_WalkieTalkie(const char* name, const char* model, float radius_of_action, float frequency) : c_BaseTelephone(name, model)
{
	this->radius_of_action = radius_of_action;
	this->frequency = frequency;
}

void �_WalkieTalkie::call(float frequency, float distance)
{
	if (this->radius_of_action > distance)
	{
		if (frequency == this->frequency) {
			std::cout << "Your call successful\n";
		}
		else {
			std::cout << "Frequency not right\n";
		}
	}
	else {
		std::cout << "Out of radius action\n";
	}
}

std::ostream& operator<<(std::ostream& out, const �_WalkieTalkie& tel)
{
	out << "Name: " << tel.name << "\tModel: " << tel.model << "\tFrequency: " << tel.frequency
		<< "\t Radius of action: " << tel.radius_of_action << "\n";
	return out;
}