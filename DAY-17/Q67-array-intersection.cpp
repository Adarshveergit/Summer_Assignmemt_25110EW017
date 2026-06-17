#include<iostream>
using namespace std;
int intersectionArray(int arr1[], int n1, int arr2[], int n2, int result[]){
    int k=0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                result[k] = arr1[i];
                k++;
                break;

            }
        }
    }
    return k;
}
int main(){
    int array1[1000],array2[1000],result[2000],num1,num2;
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
    int k = intersectionArray(array1,num1,array2,num2,result);
    cout<<"Intersection of arrays: ";
    for(int i=0; i<k; i++){
        cout<<result[i];

    }
    return 0;
}