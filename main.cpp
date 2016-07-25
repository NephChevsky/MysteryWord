#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    srand(time(0));

    // type the word
    cout << "Type a word" << endl;
    string word, savedWord, mysteryWord;
    getline(cin, word);
    mysteryWord = word;
    savedWord = word;

    // mix the word
    int nbr;
    int i=0;
    while (word[0]!='\0')
    {
        nbr = rand() % word.size();
        mysteryWord[i]=word[nbr];
        word.erase(nbr, 1);
        i++;
    }

    // guess the word
    int error = 1;
    do
    {
        cout << "What is this word?" << endl;
        cout << mysteryWord << endl;
        string guess;
        getline (cin, guess);
        if (savedWord == guess)
        {
            cout << "You won" << endl;
            error = 0;
        }
        else
        {
            cout << "Wrong, try again" << endl;
        }
    } while (error);

    return 0;
}


