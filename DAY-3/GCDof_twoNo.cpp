#include<iostream>
using namespace std;
int main(){
    int n1,n2,i=1,GCD=1;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter second number:";
    cin>>n2;
    while(i<=n1 && i<=n2){
        if(n1%i==0 && n2%i==0){
            GCD=i;
        }
        i++;
    }
    cout<<GCD;
    return 0;
}