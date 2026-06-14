#include<iostream>
using namespace std;
int frequency(int arr[], int n, int element ){
    int count=0;
    for(int i=0; i<n; i++ ){

        if(arr[i] == element){

            count++;
        }
    }

    return count;
}

int main(){
    int array[1000],num,element;

    cout<<"Enter the number of element: ";
    cin>>num;

    cout<<"Enter the element: ";
    for( int i=0; i<num; i++ ){

        cin>>array[i];

    }
    cout<<"Enter the element to find the frequency: ";
    cin>>element;
    
    cout<<"Frequency of "<<element<<" is "<<frequency(array,num,element);

    return 0;


}