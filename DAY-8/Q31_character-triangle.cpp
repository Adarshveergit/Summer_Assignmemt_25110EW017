#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row want to print: ";
    cin>>num;
    int i=1;
    while(i<=num){

        int j=1;
        char ch='A';
        while(j<=i){

            cout<<ch;
            ch++;
            j++;

        }
        i++;
        cout<<endl;
    }
    return 0;
}