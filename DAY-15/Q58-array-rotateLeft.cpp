#include<iostream>
using namespace std;
void leftRotate(int arr[],int n){
    int first =arr[0];
    for(int i=0; i<n; i++){
        arr[i]=arr[i+1];

    }
    arr[n-1]=first;
}
int main(){
    int array [1000],num;
    cout<<"Enter number of elements: ";
    cin>>num;
    cout<<"Enter elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];

    }
    leftRotate(array,num);
    cout<<"Array after left rotation: "<<endl;
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}