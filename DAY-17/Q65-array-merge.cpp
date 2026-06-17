#include<iostream>
using namespace std;
void mergeArray(int arr1[],int n1, int arr2[], int n2,int arr3[]){
    int k=0;
    for(int i=0; i<n1; i++){
        arr3[k] = arr1[i];
        k++;
    }
    for(int i=0; i<n2; i++){
        arr3[k]=arr2[i];
        k++;

    }
}
int main(){
    int array1[1000],array2[1000],array3[2000],num1,num2;
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
    mergeArray(array1,num1,array2,num2,array3);
    cout<<"Merged arrayb :";
    for(int i=0; i<num1+num2; i++){
        cout<<array3[i];
    }
    return 0;

}