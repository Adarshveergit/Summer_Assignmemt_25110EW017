#include<iostream>
using namespace std;
int main(){ 
    int num;
//    int i=1;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
        }


    }
    return 0;
}