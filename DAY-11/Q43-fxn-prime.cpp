#include<iostream>
using namespace std;
int isPrime(int n){
    int count=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
        }
    }
    if (count==0){
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
    if (isPrime(num)){
    cout<<num<<" is prime number:";
    }
    else{
        cout<<num<<" is not prime number:";
    }
    return 0;
}