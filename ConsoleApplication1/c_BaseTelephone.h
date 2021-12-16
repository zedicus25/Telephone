#pragma once
class c_BaseTelephone
{
protected:
	char* name;
	char* model;
public:
	c_BaseTelephone();
	c_BaseTelephone(const char* name, const char* model);
};

