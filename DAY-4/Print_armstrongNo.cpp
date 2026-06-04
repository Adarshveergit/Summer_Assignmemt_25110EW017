#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int min_num,max_num;

    cout<<"Enter the lowest number :";
    cin>>min_num;

    cout<<" Enter the upper number :";
    cin>>max_num;

    cout<<"The armstrong number between "<<min_num<<" and "<<max_num<<" is ";

    for(int i =min_num;i<=max_num;i++)
    {
        int count=0,rem,temp ,num , sum=0;
       num=i;
    temp=num;

    while(num!=0)
    {
        num=num/10;
        count++;

    }
    num=temp;
    while(num!=0)
    {
        rem=num%10;
        sum =sum+round(pow(rem,count));
        num=num/10;
    }
    if(sum==i)
    {
        
      cout<<i<<",";
       
    }
} 
 
   return 0;

}