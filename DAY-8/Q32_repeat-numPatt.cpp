#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row want to print: ";
    cin>>num;
    int i=1;
    while(i<=num){

        int j=1;
        while(j<=i){
            cout<<i;
            j++;

        }
        i++;
        cout<<endl;

    }
    return 0;
}