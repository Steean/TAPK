#include <stdio.h>
#include <iostream>
#include "SharedPtr.hpp"

int main()
{
	SharedPtr <std :: string > sp(new std :: string (" Hello world "));

	if(sp)
		std :: cout << "SP Contains : " << *sp << std :: endl ;
}