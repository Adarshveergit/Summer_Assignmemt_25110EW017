#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,temp ,n, i=1;
    cout<<"How many terms you want: ";
    cin>>n;
    while(i<=n){
         cout<<n1<<" ";
        temp=n1+n2;
        n1=n2;
        n2=temp;
        i++;
        
    }
  
    return 0;

}