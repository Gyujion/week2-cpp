#include <iostream>
#include <string>

using namespace std;

void play(string answer,string userInput);

int main(void)
{
    string answer;
    string userInput;

    cout << "Enter a answer: ";
    cin >> answer;
    while (answer!=userInput)
    {
        cout << "Enter a guess: ";
        cin >> userInput;

        play(answer,userInput);
    }

    return 0;
}