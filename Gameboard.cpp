#include <iostream>
#include <string>
#include<vector>
#include<ctime>
#include "Gameboard.h"
#include "DisplayIncorrectLetters.h"
#include "DisplayGallows.h"
#include "DisplayGuessWord.h"
using namespace std;


void Gameboard(int GB_NbrIncorrect, string GB_Word, string GB_IncLetters)
{
    //cout <<"Gameboard function called successfully" <<endl;
    DisplayIncorrectLetters(GB_IncLetters);
    GB_NbrIncorrect = 0;
    DisplayGallows(GB_NbrIncorrect);
    DisplayGuessWord(GB_Word);
}
