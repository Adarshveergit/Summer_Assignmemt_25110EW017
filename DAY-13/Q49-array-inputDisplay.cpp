#include<iostream>
using namespace std;
void inputarray( int arr[],int n){
    cout<<" Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void displayArray(int arr[],int n){
    cout<<"Array elements are: "<<endl;
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array[100],n;
    cout<<"Enter number of elements: ";
    cin>>n;
    inputarray(array ,n);
    displayArray(array, n);
    return 0;
}