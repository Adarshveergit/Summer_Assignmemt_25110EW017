#include<iostream>
using namespace std;
int main(){
  int n1,n2,LCM,GCD=1,i=1;
  cout<<"Enter the first number : ";
  cin>>n1;
  cout<<"Enter the second number:";
  cin>>n2;
  while(i<=n1 && i<=n2){
    if(n1%i==0 && n2%i==0){
        GCD=i;
    }
    i++;

  }
   LCM= (n1*n2)/GCD;
   cout<<LCM;
  return 0;
}