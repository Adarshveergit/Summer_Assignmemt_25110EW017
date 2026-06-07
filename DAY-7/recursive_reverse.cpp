#include<iostream>
using namespace std;
int reverse(int num, int rev=0){
    if(num==0){
        return rev;

    }
    else{
        return reverse(num/10, rev*10+num%10);
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    cout<<"Reversed number: "<<reverse(num);
    return 0;
}