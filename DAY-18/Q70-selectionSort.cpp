#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    int minIndex,temp;
    for(int i = 0; i<n-1; i++){

        minIndex=i;
        for(int j= i+1; j<n; j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main(){
    int array[100],num;
    cout<<"Enter number of elements:";
    cin>>num;

    cout<<"Enter elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    selectionSort(array,num);
    cout<<"Sorted array:";
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}