#include <iostream>
#include <string>
#include "UserGuess.h"
#include "UserInputErrorChecking.h"

void UserGuess(std::string &answer, std::string &guessed, std::string &currentWord)
{
	int ansSize = answer.length();
	std::cout << "Please enter a 1 letter guess: ";

	char guess;
	bool alreadyGuessed = false;
	bool validGuess = false;
	bool correctGuess = false;
	do
	{
		while (!(std::cin >> guess))
		{
			ErrorCheck("Please enter a 1 letter guess");
		}
		guess = tolower(guess);
		for (char x : guessed)
		{
			if (x == guess)
			{
				alreadyGuessed = true;
				ErrorCheck("You already guessed that. Try again");
			}
		}
		if (alreadyGuessed == true)
		{
			alreadyGuessed = false;
		}
		else
		{
			validGuess = true;
		}
	} while ((!(validGuess)));
	int y = 0;
	for (char x : answer)
	{
		if (x == guess)
		{
			currentWord[y] = guess;
			correctGuess = true;
		}
		y++;
	}
	if (!(correctGuess))
	{
		guessed += guess;
	}
}
