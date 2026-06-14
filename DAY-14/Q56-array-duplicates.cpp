#include<iostream>
using namespace std;
void findDuplicate(int arr[],int n){
    cout<<"Duplicate array is "<<" ";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){ 
              cout<<arr[i]<<" ";
              break;
            }
        }
    }
}
int main(){
    int num,array[1000];
    cout<<"Enter the number of element: ";
    cin>>num;
    cout<<"Enter elements: ";
    for(int i=0; i<num; i++){
        cin>>array[i];

    }
    findDuplicate(array ,num);
    return 0;

}