#include <string>
#include <iostream>

using namespace std;

void play(string answer, string userInput,int chance)
{
    int strike = 0, ball = 0;

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer.size(); j++)
        {
            if (answer[i] == userInput[j])
            {
                if (i == j)
                    strike++;
                else
                    ball++;
            }
        }
    }
    if ((chance!=0&&answer == userInput)||(chance==0&&answer==userInput))
    {
        cout << "You win!" << endl;
        return;
    }
    else if(chance == 0&&answer!=userInput)
    {
        cout<<"You lose!"<<endl;
        return;
    }
    else
        cout << "Strikes: " << strike << ", Balls: " << ball << endl;
}