#include<iostream>
using namespace std;
int MaxFrequency(int arr[],int n){
    int maxfreq=0;
    int element;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > maxfreq){
            maxfreq = count;
            element = arr[i];

        }
    }
    return element ;
}
int main(){


int array[1000],num;
cout<<"Enter number of elements:";
cin>>num;
cout<<"Enter the elements:";
for(int i=0; i<num; i++){
    cin>>array[i];
}
cout<<"Maximum frequency element is : "<<MaxFrequency(array,num);
return 0;
}

