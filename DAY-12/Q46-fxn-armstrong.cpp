#include <iostream>
#include<math.h>
using namespace std;
int isArmstrong(int n){
    int rem,count=0,sum=0;
    int temp =n;
    while(n!=0){
        n=n/10;
        count++;
    }
    n=temp;
    while(n!=0){
        rem=n%10;
        sum=sum+round(pow(rem,count));
        n=n/10;
    }
    if(temp==sum){
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
    if(isArmstrong(num)){
        cout<<num<<" is armstrong number:";
    }
    else{
        cout<<num<<" is not armstrong number:";
    }
    return 0;
}