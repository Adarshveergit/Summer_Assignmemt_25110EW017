#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int count=0;
    while(num!=0){
        if(num&1==1){
            count++;
        }
        num=num>>1;
    }
    cout<<"The number of 1 bits is: "<<count;
    return 0;
}
