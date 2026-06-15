#include<iostream>
using namespace std;
void rightRotate(int arr[],int n){
    int last =arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];

    }
    arr[0]=last;
}
int main(){
    int array [1000],num;
    cout<<"Enter number of elements: ";
    cin>>num;
    cout<<"Enter elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];

    }
    rightRotate(array,num);
    cout<<"Array after left rotation: "<<endl;
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}