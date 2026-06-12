#include <iostream>
using namespace std;
void printFibonacci(int n){
    int a=0,b=1,i=1,temp;
    while(i<=n){
        cout<<a<<" ";
        temp=a+b;
        a=b;
        b=temp;
        i++;

    }

}
int main(){
    int term;
    cout<<"Enter the number of term you want to print: ";
    cin>>term;
   printFibonacci(term);
    return 0;
}