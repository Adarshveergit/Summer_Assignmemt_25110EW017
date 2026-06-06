#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number in decimal: ";
    cin>>num;
    long long ans=0;
    int i=0;
    int temp=num;
    while(num!=0){
        int bit=num&1;
        ans=(bit*round(pow(10,i)))+ans;
        num=num>>1;
        i++;

    }
    num=temp;
    cout<<num<<" in binary is: "<<ans;
    return 0;
    
}