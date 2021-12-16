#include <iostream>
#include "c_Smartphone.h"
#include "c_ButtonTelephone.h"
#include "с_WalkieTalkie.h"
int main()
{
	c_Smartphone smart("Samsung", "A12", 8.7f, 4);
	std::cout << smart;
	
	c_ButtonTelephone but("Nokia", "3310", "123456789*0#");
	std::cout << but;

	с_WalkieTalkie wal("radio", "1", 10.0f, 4.4);
	std::cout << wal;
	wal.call(4.4f, 11.0f);
}
