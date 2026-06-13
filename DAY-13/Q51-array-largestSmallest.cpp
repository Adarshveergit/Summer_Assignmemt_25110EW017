#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];

        }
    }
    return largest;
}
int smallest(int arr[],int n){
    int smallest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main(){
    int num;
    cout<<"Enter the number of element: ";
    cin>>num;
    int array[1000];
    cout<<"Enter the elements: ";
    for(int i=0;i<num;i++){
        cin>>array[i];


    }
    cout<<"Largest : "<<largest(array,num)<<endl;
    cout<<"Smallest: "<<smallest(array,num);
    
    return 0;
}