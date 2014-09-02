#include <stdio.h>
#include <iostream>
#include "SharedPtrWithEqOverloads.hpp"
#include "SafeBool.hpp"

int main()
{
	Testable test;
	Testable test2;
	
	if (test==test2) 
	{
		std::cout << "Virker det?" << std::endl;
	}
	if (test!=test2) 
	{
		std::cout << "JA SGU!" << std::endl;	
	}

}