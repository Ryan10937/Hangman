#include <iostream>
#include "UserInputErrorChecking.h"

void ErrorCheck(std::string errMsg)
{
	//Error Message
	std::cout << errMsg << std::endl;

	// Clear input stream
	std::cin.clear();

	// Discard previous input
	std::cin.ignore(123, '\n');
}
