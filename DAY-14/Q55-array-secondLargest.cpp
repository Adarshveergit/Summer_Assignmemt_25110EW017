#include<iostream>
using namespace std;
int secondLargest(int arr[], int n ){
    int largest=arr[0];

    for(int i=0; i<n; i++ ){

        if( arr[i] > largest ){

            largest=arr[i];

        }
        
    }
    int second = -1;
    for(int i=0; i<n; i++){
    

         if(arr[i] > second && arr[i] < largest ){
            second=arr[i];

        }
    }
    return second;
} 
int main(){
    int num,array[1000];
    cout<<"Enter the number of element: ";
    cin>>num;
    cout<<"Enter elements: ";
    for(int i=0;i<num;i++){
        cin>>array[i];

    }
    cout<<"The second largest element is: "<<secondLargest(array,num);
    return 0;
}