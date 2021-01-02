#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include<ctime>
#include "LoadWordFile.h"
using namespace std;


string LoadWordFile(int LWF_Difficulty)
{
    vector<string> Words;
    string iWord;
    string iWordUsedDate;
    ifstream WordFile ("Words.txt");

    if(WordFile.is_open()){
        while (!(WordFile.eof())){
            getline (WordFile,iWord);
            if (LWF_Difficulty == 4){    //this needs a switch statement... bad...
                if (iWord.size() <3){
                    Words.push_back(iWord);
                }
            }
            else
                if (LWF_Difficulty == 3){
                    if ((iWord.size() >2) and (iWord.size() <5)){
                        Words.push_back(iWord);
                    }
                }
                else
                    if (LWF_Difficulty == 2){
                        if ((iWord.size() >4) and (iWord.size() <9)){
                            Words.push_back(iWord);
                        }
                    }
                    else
                        if (LWF_Difficulty == 1){
                            if (iWord.size() >8){
                                Words.push_back(iWord);
                            }
                        }
                        else {
                            cout <<"Invalid Difficulty Parameter Passed" <<endl;
                            return "   ";
                            }
        }
    }
    else
        cout <<" Unable to open Word File" <<endl;

//    cout <<"Size of Word Vector: " <<Words.size() <<endl;
    srand(time(0));
    int RcdSelected = 0;
    RcdSelected = rand() % (Words.size());
//    cout <<"RcdSelected is: " <<RcdSelected <<endl;
    iWord = Words[RcdSelected];
    return iWord;
}
