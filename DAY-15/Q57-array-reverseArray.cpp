#include<iostream>
using namespace std;
void RverseArray(int arr[],int n){
    int temp;
    
    for(int i=0; i<n/2; i++){
        temp =arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
}
int main(){
    int array[100],num;
    cout<<"Enter the number of element: ";
    cin>>num;
    cout<<"Enter elements:";
    for(int i=0; i<num; i++ ){
        cin>>array[i];
    }
    RverseArray(array,num);
    cout<<"The reversed array is: ";
    for(int i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}