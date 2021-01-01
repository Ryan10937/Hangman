#include <iostream>
#include <string>
#include<vector>
#include<ctime>
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
            break;
         default :
            cout <<"***Error ***  Invalid Incorrect Letters parameter passed to DisplayGallows Function" <<endl;
    }
}
