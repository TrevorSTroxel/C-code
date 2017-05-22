// g++ words.cpp -o words
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include <string>

using namespace std;

string RandomWord(int wordlength);

int main ()
{
        /* initialize random seed: */
    srand (time(NULL));
    string checkword;
    cout << "Input a 6 letter word in all caps" << endl;
	cin >> checkword;
    string theword;
    int i, num = 6; //num is how long word is
    for( i = 0; i < 100000000; i++){
        theword = RandomWord(num);
        if (checkword == theword){
            cout << "that word is a hit!"<< endl;
        cout << i << " " << theword << " ";
        
        }
    }
    return 0;
}

string RandomWord(int wordlength){
    string aword;

    int i, randomInt;
    int val = 0;
    char letter;

     for(i = 0; i < wordlength;i++)  {
        randomInt = rand() % 26 + 65;
        letter = (char)randomInt;
        string aletter (1,letter);
        aword = aword + aletter;
        //cout<<i<<" * ";
    }

return aword;
}
