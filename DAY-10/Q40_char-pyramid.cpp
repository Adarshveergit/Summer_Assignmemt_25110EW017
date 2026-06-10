#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row want to print: ";
    cin>>num;
    int i=1;
    while(i<=num){
        int space=num-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        char ch ='A';
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        int start=i-1;
        ch =ch-2;
        while(start){
            cout<<ch;
            ch--;
            start--;
        }
        cout<<endl;
        i++;

    }
    return 0;
}