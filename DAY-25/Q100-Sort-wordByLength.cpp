#include<iostream>
using namespace std;

int Length(char str[])
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char word[10][50];
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter words:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(Length(word[i]) > Length(word[j]))
            {
                char temp[50];

                for(int k = 0; word[i][k] != '\0'; k++)
                {
                    temp[k] = word[i][k];
                    temp[k + 1] = '\0';
                }

                for(int k = 0; word[j][k] != '\0'; k++)
                {
                    word[i][k] = word[j][k];
                    word[i][k + 1] = '\0';
                }

                for(int k = 0; temp[k] != '\0'; k++)
                {
                    word[j][k] = temp[k];
                    word[j][k + 1] = '\0';
                }
            }
        }
    }

    cout << "Words sorted by length:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << word[i] << endl;
    }

    return 0;
}