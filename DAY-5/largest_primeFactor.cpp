#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int factor=1;
    int temp=1;

   for(int i=2;i<num; i++){
    if(num%i==0){
        cout<<i<<" ";
    }
    // num=num/i;
    // i--;

   }
   
   return 0;
}