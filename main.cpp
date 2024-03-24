#include <iostream>
#include <string>

using namespace std;

void play(string answer,string userInput);
string makeNum();

int main(void)
{
    string answer;
    string userInput;

    answer = makeNum();
    cout<<"Answer is "<<answer<<endl;
    while (answer!=userInput)
    {
        cout << "Enter a guess: ";
        cin >> userInput;

        play(answer,userInput);
    }

    return 0;
}