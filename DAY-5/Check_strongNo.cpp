#include<iostream>
using namespace std;
int main(){
    int num,sum=0,rem ,fact,temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp =num;
    while(num!=0){
        rem=num%10;
       int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==temp){
        cout<<temp<<" Strong number";
    }
    else{
        cout<<temp<<" Not strong number";
    }
    cout<<endl;
    return 0;
}