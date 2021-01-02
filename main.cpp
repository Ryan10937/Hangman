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
#include "Gameboard.h"

int main()
{
	static std::string answer = "";
	static std::string guessed = "";
	static std::string currentWord = "";

	bool loopGame = true;
	bool validPlayAgain;
	bool win;
	std::string playAgain;

	while(loopGame)
	{
        validPlayAgain = true;
        win = false;
        playAgain = true;

        answer = "";
        guessed = "";
        currentWord = "";

		Greeting();

		//gets and sets a word based on difficulty
		answer = LoadWordFile(SelectDifficulty());

		//Create the "Word in progress" as just underscores
		for (size_t i = 0; i < answer.length(); i++)
		{
			currentWord += "_";
		}

        Gameboard(guessed.length(), currentWord, guessed);

		//loops through game until all guess are up
		while (guessed.length() < 6 && !win)
		{
			UserGuess(answer, guessed, currentWord);
			Gameboard(guessed.length(), currentWord, guessed);

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
            Gameboard(guessed.length(), answer, guessed);
		}
		else
		{
			std::cout << "You win! Probably on easy no doubt..." << std::endl;
            Gameboard(guessed.length(), answer, guessed);
		}

		//Set to loop game again or not, based on input
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
			else if (playAgain == "yes")
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
