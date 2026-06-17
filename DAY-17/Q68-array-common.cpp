#include<iostream>
using namespace std;
void findCommon(int arr1[], int n1, int arr2[], int n2){
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int array1[1000],array2[1000],num1,num2;
     cout<<"Enter the number of element in first array: ";
    cin>>num1;
    cout<<"Enter element of first array: ";
    for(int i=0; i<num1; i++){
        cin>>array1[i];
    }
    cout<<"Enter the number of element in second array: ";
    cin>>num2;
    cout<<"Enter element of second array:";
    for(int i=0; i<num2; i++){
        cin>>array2[i];
    }
    cout<<"Common element are: ";
    findCommon(array1,num1,array2,num2);
    return 0;
}