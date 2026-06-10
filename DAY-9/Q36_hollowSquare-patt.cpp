#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter tthe number of row want to print: ";
    cin>>num;
    int i=1;
    while(i<=num){

        int j=1;
        while(j<=num){
            if(i==1||i==num|j==1||j==num){
                cout<<"* ";
            }
            else{
                cout<<"  ";

            }
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
    
}
