#pragma once
#include "c_BaseTelephone.h"
class �_WalkieTalkie : public c_BaseTelephone
{
protected:
	float radius_of_action;
	float frequency;
public:
	�_WalkieTalkie();

	�_WalkieTalkie(const char* name, const char* model, float radius_of_action, float frequency);

	void call(float frequency, float distance);

	friend std::ostream& operator<<(std::ostream& out, const �_WalkieTalkie& tel);

};

