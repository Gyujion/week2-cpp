#include <ctime>
#include <string>
#include <iostream>

using namespace std;

string makeNum()
{
    srand((unsigned int)time(NULL));
    int random =0;
    string buffer = "";
    string answerBuffer = "";
    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            random = rand()%10;
            buffer = to_string(random);
            answerBuffer += buffer;
        }
        if (answerBuffer[0] != answerBuffer[1] && answerBuffer[0] != answerBuffer[2] && answerBuffer[1] != answerBuffer[2])
             break;
    }
    return answerBuffer;
}