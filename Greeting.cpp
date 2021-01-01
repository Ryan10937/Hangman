#include <iostream>
#include "Greeting.h"
#include "TimeOfDay.h"

void Greeting()
{
	//TODO Add time checking and goodafternoon, morning, evening
	std::cout << "     Good " << TimeOfDay();
	std::cout << " and welcome to Hangman!!" << std::endl;
	std::cout << "===================================================" << std::endl << std::endl;
}