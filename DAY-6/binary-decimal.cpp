#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter binary number: ";
    cin>>num;
    int ans=0;
    int i=0;
    while(num!=0){
     int   digit=num%10;
     ans = (digit*(round(pow(2,i))))+ans;
     num=num/10;
     i++;
    }
    
    cout<<" In decimal = "<<ans;
    return 0;
    
}
    
