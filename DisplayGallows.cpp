#include <iostream>
#include <string>
#include<vector>
#include<ctime>
#include <windows.h>

#include "DisplayGallows.h"

using namespace std;


void DisplayGallows(int GB_IncLetters)
{
    switch(GB_IncLetters){
        case 0:
            cout <<endl;
            cout <<"  _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |        " <<endl;
            cout <<" |       " <<endl;
            cout <<" |       " <<endl;
            cout <<" |       " <<endl;
            cout <<" |       " <<endl;
            cout <<" |       " <<endl;
            cout <<" |   " <<endl;
            cout <<" |   " <<endl;
            cout <<" |   " <<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            break;
        case 1:
            cout <<endl;
            cout <<" _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |       ...... " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |.  .|" <<endl;
            cout <<" |       ......" <<endl;
            cout <<" |         ||" <<endl;
            cout <<" |     " <<endl;
            cout <<" |     "<<endl;
            cout <<" |     "<<endl;
            cout <<" |     "<<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            break;
        case 2:
            cout <<endl;
            cout <<" _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |       ...... " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |.  .|" <<endl;
            cout <<" |       ......" <<endl;
            cout <<" |         || " <<endl;
            cout <<" |       |.  .| " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |____|" <<endl;
            cout <<" |       "<<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            break;
        case 3:
            cout <<endl;
            cout <<" _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |       ...... " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |.  .|" <<endl;
            cout <<" |       ......" <<endl;
            cout <<" |         || " <<endl;
            cout <<" |       *.  .| " <<endl;
            cout <<" |     _*|    |" <<endl;
            cout <<" |       |____|" <<endl;
            cout <<" |      "<<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            break;
        case 4:
            cout <<endl;
            cout <<" _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |       ...... " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |.  .|" <<endl;
            cout <<" |       ......" <<endl;
            cout <<" |         || " <<endl;
            cout <<" |       *.  .* " <<endl;
            cout <<" |     _*|    |*_" <<endl;
            cout <<" |       |____|" <<endl;
            cout <<" |      " <<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            break;
        case 5:
            cout <<endl;
            cout <<" _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |       ...... " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |.  .|" <<endl;
            cout <<" |       ......" <<endl;
            cout <<" |         || " <<endl;
            cout <<" |       *.  .* " <<endl;
            cout <<" |     _*|    |*_" <<endl;
            cout <<" |       |_||_|" <<endl;
            cout <<" |      __*    " <<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            break;
         case 6:
            int color;
            HANDLE  hConsole;
            color = 12; //1-15 range from light green to white.  7 is the defaut
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            cout <<endl;
            cout <<" _________" <<endl;
            cout <<" |         |" <<endl;
            cout <<" |       ...... " <<endl;
            cout <<" |       |    |" <<endl;
            cout <<" |       |.  .|" <<endl;
            cout <<" |       ......" <<endl;
            cout <<" |         || " <<endl;
            cout <<" |       *.  .* " <<endl;
            cout <<" |     _*|    |*_" <<endl;
            cout <<" |       |_||_|" <<endl;
            cout <<" |      __*  *__  " <<endl;
            cout <<" | " <<endl;
            cout <<" _________" <<endl;
            color = 7; //1-15 range from light green to white.  7 is the defaut
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            break;
         default :
            cout <<"***Error ***  Invalid Incorrect Letters parameter passed to DisplayGallows Function" <<endl;
    }
}
