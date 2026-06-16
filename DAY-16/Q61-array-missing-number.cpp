#include<iostream>
using namespace std;
int missingNumber(int arr[],int n){
    int totalSum = (n+1)*(n+2)/2;
    int arraySum = 0;
    for(int i=0; i<n; i++){
        arraySum=arraySum+arr[i];
    }
    return totalSum-arraySum;

} 
int main(){
    int array[1000],num;
    cout<<"Enter number of elements:";
    cin>>num;
    cout<<"Enter elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    cout<<"Missing number is: "<<missingNumber(array,num);
    
    return 0;
}

