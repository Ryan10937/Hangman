#include <iostream>
#include "Greeting.h"
#include "SelectDifficulty.h"
#include "TimeOfDay.h"
#include "UserGuess.h"
#include "LoadWordFile.h"
#include "UserInputErrorChecking.h"
#include "DisplayGallows.h"
#include "DisplayGuessWord.h"
#include "DisplayIncorrectLetters.h"

int main()
{
	static std::string answer;
	static std::string guessed;
	static std::string currentWord;

	bool loopGame = true;
	bool validPlayAgain = true;
	bool win = false;
	std::string playAgain;

	while(loopGame)
	{
		Greeting();

		//gets and sets a word based on difficulty
		answer = LoadWordFile(SelectDifficulty());

		//Create the "Word in progress" as just underscores
		for (size_t i = 0; i < answer.length(); i++)
		{
			currentWord += "_";
		}

		//loops through game until all guess are up
		while (guessed.length() < 6 && !win)
		{
			UserGuess(answer, guessed, currentWord);
			
			DisplayGallows(guessed.length());
			DisplayIncorrectLetters(guessed);
			DisplayGuessWord(currentWord);

			win = true;
			for (char x : currentWord)
			{
				if (x == '_')
				{
					win = false;
				}
			}
		}
		ErrorCheck("");

		if (!win)
		{
			std::cout << "You lose. Loser." << std::endl;
		}
		else
		{
			std::cout << "You win! Probably on easy no doubt..." << std::endl;
		}

		//Set to loop game again or not, based on input
		loopGame = false;
		std::cout << "Do you want to play again? Enter Yes or No: ";
		while (validPlayAgain)
		{
			while (!(std::cin >> playAgain))
			{
				ErrorCheck("Enter Yes or No");
			}
			if (playAgain == "No")
			{
				loopGame = false;
				validPlayAgain = false;
			}
			else if (playAgain == "Yes")
			{
				loopGame = true;
				validPlayAgain = false;
				for (size_t i = 0; i < 50; i++)
				{
					std::cout << std::endl;
				}
			}
			else
			{
				ErrorCheck("Enter Yes or No");
				validPlayAgain = true;
			}
		}
	}
	

	return 0;
}