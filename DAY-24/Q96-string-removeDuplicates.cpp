#include<iostream>
using namespace std;

void RemoveDuplicate(char str[])
{
    char result[100];
    int k = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';

    cout << "String after removing duplicates: " << result;
}

int main()
{
    char word[100];

    cout << "Enter string: ";
    cin >> word;

    RemoveDuplicate(word);

    return 0;
}