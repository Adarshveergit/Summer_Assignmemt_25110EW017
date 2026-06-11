#include<iostream>
using namespace std;
int num_max(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}
int main(){
    int num1 , num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the secind number: ";
    cin>>num2;
    cout<<"Maximum number: "<<num_max(num1,num2);
    return 0;
}