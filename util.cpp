#include <ctime>
#include <string>
#include <iostream>

using namespace std;

string makeNum()
{
    srand((unsigned int)time(NULL));
    int random = 0;
    string buffer = "";
    string answerBuffer = "";
    for (int i = 0; i < 3; i++)
    {
        random = rand() % 10;
        buffer = to_string(random);
        answerBuffer += buffer;
    }
    return answerBuffer;
}