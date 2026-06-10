#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row want to print: ";
    cin>>num;
    int i=1;
    while(i<=num){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;

        }
        int j=1;
        while(j<=num-i+1){
            cout<<"*";
            j++;

        }
        int start=num-i;
        while(start){
            cout<<"*";
            start--;
        }
        i++;
        cout<<endl;

    }
    return 0;

}