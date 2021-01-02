#include <iostream>
#include <string>
#include<vector>
#include<ctime>
#include "DisplayGuessWord.h"

using namespace std;


void DisplayGuessWord(string GB_Word)
{
    //cout <<"Display Guest Word Functions called successfully" <<endl;
    cout <<endl <<endl <<endl <<endl;
    unsigned int i=0;
        for (i=0;i<=GB_Word.size();++i){
            GB_Word[i] = toupper(GB_Word[i]);
            cout <<" " <<GB_Word[i];;
        }
    cout <<endl <<endl<<endl <<endl;
}
