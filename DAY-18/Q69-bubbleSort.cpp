#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int temp ;
    for(int i = 0; i < n-1; i++){
        
        for(int j = 0; j < n-1-i; j++){

            if(arr[j] > arr[j+1]){

                temp = arr[j];

                arr[j] = arr[j+1];

                arr[j+1] = temp;

            }
        }

    }
}
int main(){
    int array[1000],num;
    cout<<"Enter number of elements:";
    cin>>num;
    cout<<"Enter elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    bubbleSort(array,num);
    cout<<"Sorted array:";
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}