#include<iostream>
#include<math.h> 
using namespace std;
int main(){
    int num, count=0,rem,temp,sum=0;
    cout<<"Enter the number: ";
    cin>>num;

    temp = num;

    //count digits
    while(num!=0){
        num=num/10;
        count++;
    }
    num=temp;

    //calculate sum of digit raise to power count

    while(num!=0){

        rem=num%10; 
      sum = sum +round(pow(rem,count));
      num=num/10;

        }
       
        if(sum==temp){
            cout<<"Armstrong number";
        }
        else{
            cout<<"Not armstrong number ";
        }
        return 0;
}