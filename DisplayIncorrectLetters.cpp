#include <iostream>
#include <string>
#include<vector>
#include<ctime>
#include "DisplayIncorrectLetters.h"

using namespace std;


void DisplayIncorrectLetters(string GB_IncLetters)
{
    //cout <<"Display Incorrect Letters Functions called successfully" <<endl;
    cout <<endl <<"Letters Used: ";

        unsigned int i=0;
        for (i=0;i<=GB_IncLetters.size();++i){
            GB_IncLetters[i] = toupper(GB_IncLetters[i]);
            cout <<" " <<GB_IncLetters[i];;
        }

    cout <<endl;
}
