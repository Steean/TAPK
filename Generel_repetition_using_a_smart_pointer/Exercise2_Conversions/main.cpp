#include <stdio.h>
#include <iostream>
#include "SharedPtrWithEqOverloads.hpp"

int main()
{
	SharedPtr<int> spi(new int(42));
	SharedPtr<double> spd(new double(42));

	std::string  test = (spi == spd).ToString();

	std::cout << spi == spd << std::endl;

}