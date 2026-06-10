#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row want print: ";
    cin>>num;
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=num-i+1){
            cout<<j;
            j++;

        }
        i++;
        cout<<endl;

    }
    return 0;
    
}