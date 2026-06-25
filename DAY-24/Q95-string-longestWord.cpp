#include<iostream>
using namespace std;

void LongestWord(char str[])
{
    int maxLength = 0;
    int start = 0;

    int currentLength = 0;
    int currentStart = 0;

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            currentLength++;
        }
        else
        {
            if(currentLength > maxLength)
            {
                maxLength = currentLength;
                start = currentStart;
            }

            currentLength = 0;
            currentStart = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    cout << "Longest word: ";

    for(int i = start; i < start + maxLength; i++)
    {
        cout << str[i];
    }
}

int main()
{
    char sentence[100];

    cout << "Enter sentence: ";
    cin.getline(sentence, 100);

    LongestWord(sentence);

    return 0;
}