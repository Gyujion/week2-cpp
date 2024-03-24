#include <iostream>
#include <string>

using namespace std;

void play(string answer,string userInput);

int main(void)
{
    string answer;
    string userInput;

    cout << "Enter a Answer: ";
    cin >> answer;
    while (answer!=userInput)
    {
        cout << "Enter a Guess: ";
        cin >> userInput;

        play(answer,userInput);
    }

    return 0;
}