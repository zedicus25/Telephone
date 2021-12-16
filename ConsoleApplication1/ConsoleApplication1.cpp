#include <iostream>
#include "c_Smartphone.h"
#include "c_ButtonTelephone.h"
int main()
{
	c_Smartphone smart("Samsung", "A12", 8.7f, 4);
	std::cout << smart;
	
	c_ButtonTelephone but("Nokia", "3310", "123456789*0#");
	std::cout << but;

	smart.call("+380981515");
}
