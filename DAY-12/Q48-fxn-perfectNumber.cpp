#include<iostream>
using namespace std;
int isPerfect(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if (sum==n){
        return 1;
    }
    else{
        return 0;

    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(isPerfect(num)){
        cout<<num<<" is a perfect number:";

    }
    else{
        cout<<num<<" is not a perfect number: ";
    }
    return 0;
}