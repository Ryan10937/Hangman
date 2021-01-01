#include <iostream>
#include "SelectDifficulty.h"
#include "UserInputErrorChecking.h"

int SelectDifficulty()
{
	int Difficulty;

	std::cout << "1. Easy" << std::endl;
	std::cout << "2. Medium" << std::endl;
	std::cout << "3. Hard" << std::endl;
	std::cout << "4. Insane" << std::endl;

	std::cout << "Please select your difficulty 1 to 4: ";

	while (!(std::cin >> Difficulty) || Difficulty < 1 || Difficulty > 4)
	{
		ErrorCheck("ERROR : Please enter a number between 1 and 4");
	}

	std::string tempName;
	if (Difficulty == 1)
	{
		tempName = "Easy\n";
	}
	else if (Difficulty == 2)
	{
		tempName = "Medium\n";
	}
	else if(Difficulty == 3)
	{
		tempName = "Hard\n";
	}
	else
	{
		tempName = "Insane\n";
	}
	std::cout << "You selected: " << tempName << std::endl;
	
	return Difficulty;
}