#include <iostream>
#include <string>
#include<vector>
#include<ctime>
#include <windows.h>
#include "DisplayIncorrectLetters.h"

using namespace std;


void DisplayIncorrectLetters(string GB_IncLetters)
{
    //cout <<"Display Incorrect Letters Functions called successfully" <<endl;
    int color = 7;
    HANDLE  hConsole;
	color = 12; //1-15 range from light green to white.  7 is the defaut
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);


    cout <<endl <<"Letters Used: ";

        unsigned int i=0;
        for (i=0;i<=GB_IncLetters.size();++i){
            GB_IncLetters[i] = toupper(GB_IncLetters[i]);
            cout <<" " <<GB_IncLetters[i];;
        }

    cout <<endl;
   	color = 7; //1-15 range from light green to white.  7 is the defaut
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);

}
