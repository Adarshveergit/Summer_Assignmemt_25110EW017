#include<iostream>
using namespace std;
int unionArray(int arr1[], int n1, int arr2[], int n2, int result[]){
    int k=0;
    for(int i=0; i<n1; i++){
        result[k] = arr1[i];
        k++;
    }
    for(int i=0;i<n2;i++){
        bool found = false;

        for(int j=0; j<k; j++){
            
            if (arr2[i]==result[j]){
                found=true;
                break;
            }
        }
        if(found==false){
            result[k]=arr2[i];
            k++;
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
    int size = unionArray(array1,num1,array2,num2,result);
    cout<<"Union of array: ";
    for(int i=0; i<size; i++){
        cout<<result[i]<<" ";
    }
    return 0;

}