#include<iostream>
using namespace std;
int evenOdd(int arr[],int n){
    int counteve=0,countodd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            counteve++;
        }
        else{
            countodd++;
        }
    }
    cout<<"The total number of even element is: "<<counteve<<endl;
    cout<<"The total number of odd element is: "<<countodd<<endl;
}
int main(){
    int array[1000],num;
    cout<<"Enter the number of element: ";
    cin>>num;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<num;i++){
        cin>>array[i];

    }
    evenOdd(array,num);
    return 0;
}