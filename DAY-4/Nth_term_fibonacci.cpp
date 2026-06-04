#include<iostream>
using namespace std;  

int main(){

    int n1=0,n2=1,temp,Nth_term,i=1;

    cout<<"Which term do yuo want: ";
    cin>>Nth_term;

    while(i<Nth_term){
        temp=n1+n2;
        n1=n2;
        n2=temp;
        i++;

    }

    cout<<"The "<<Nth_term<<" term is "<<n1;
    
    return 0;
}
