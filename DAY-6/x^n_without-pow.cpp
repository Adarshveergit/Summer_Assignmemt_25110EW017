#include<iostream>
using namespace std;
int main(){ 
int x,n;
cout<<"Enter the base value: ";
cin>>x;
cout<<"Enter the power value: ";
cin>>n;
int i=0;
int ans =1;
if (n==0){
    ans=1;
    }
else{
     while(i<n){
        ans=x*ans;
        i++;
     }
}
cout<<"Answer is: "<<ans;
return 0;
}
