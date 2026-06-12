#include<iostream>
using namespace std;
int isPalindrome(int n){
    int rev=0,rem;
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp){
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
    if(isPalindrome(num)){
        cout<<num<<" is palindrome number: ";
    }
    else{
        cout<<num<<" is not palindrome number:";
    }
    return 0;
}