#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row want to print: ";
    cin>>num;
    int i=1;
    while(i<=num){
        int space=num-i;
        while(space){
            cout<<" ";
            space--;

        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}