#include<iostream>
using namespace std;
void movezeroes(int arr[],int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i] !=0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
}
int main(){
        int array [1000],num;
    cout<<"Enter number of elements: ";
    cin>>num;
    cout<<"Enter elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];

    }
    movezeroes(array,num);
    cout<<"Array after moving zeroes to end: ";
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}