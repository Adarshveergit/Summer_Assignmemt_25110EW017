#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;

    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is: "<<factorial(num);
    return 0;
}
