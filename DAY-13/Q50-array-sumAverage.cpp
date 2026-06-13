#include<iostream>
using namespace std;
int sumAverage(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
   float avg;
   avg=(float)sum/n;
   cout<<"Sum of array is "<<sum<<endl;
   cout<<"Average of array is "<<avg<<endl;
}
int main(){
    int array[100],num;
    cout<<"Enter the number of element:";
    cin>>num;
    cout<<"Enter the elements:";
    for(int i=0;i<num;i++){
        cin>>array[i];

    } 
    sumAverage(array,num);
    return 0;
}
