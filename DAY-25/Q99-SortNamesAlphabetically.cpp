#include<iostream>
using namespace std;

int main()
{
    char name[10][50];
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    cout << "Enter names:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int k = 0;

            while(name[i][k] != '\0' && name[j][k] != '\0')
            {
                if(name[i][k] > name[j][k])
                {
                    char temp[50];

                    for(int x = 0; name[i][x] != '\0'; x++)
                    {
                        temp[x] = name[i][x];
                        temp[x + 1] = '\0';
                    }

                    for(int x = 0; name[j][x] != '\0'; x++)
                    {
                        name[i][x] = name[j][x];
                        name[i][x + 1] = '\0';
                    }

                    for(int x = 0; temp[x] != '\0'; x++)
                    {
                        name[j][x] = temp[x];
                        name[j][x + 1] = '\0';
                    }

                    break;
                }
                else if(name[i][k] < name[j][k])
                {
                    break;
                }

                k++;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}