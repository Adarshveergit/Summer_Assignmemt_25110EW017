#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int low =0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }

    }
    return -1;
}
int main(){
    int array[1000], num, key;
    cout<<"Enter the number of elements:";
    cin>>num;
    cout<<"Enter the elements:";
    for(int i=0; i<num; i++){
        cin>>array[i];

    }
        cout<<"Enter element to search: ";
        cin>>key;
         int search = binarySearch(array, num,key);
         if(search != -1){
            cout<<"Element found at index "<<search;
         }
         else{
            cout<<"Element not found:";
         }
         return 0;
}