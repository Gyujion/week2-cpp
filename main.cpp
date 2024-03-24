#include <iostream>
#include <string>

using namespace std;

void play(string answer, string userInput,int chance);
string makeNum();

int main(void)
{
    string userInput = "";
    string answer = makeNum();
    int chance = 5;

    while (answer != userInput)
    {
        cout << chance << " chances left." << endl;
        cout << "Enter a guess: ";
        cin >> userInput;

        chance--;
        play(answer, userInput,chance);
        if(chance==0)
            break;
    }

    return 0;
}