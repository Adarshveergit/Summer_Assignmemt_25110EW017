#include<iostream>
using namespace std;
int RemoveDuplicate(int arr[],int n){
    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            if(arr[i]==arr[j]){

                for(int k=j; k < n-1; k++){
                    arr[k]= arr[k+1];

                }
                n--;
                j--;
            }
        }
    }
    return n;

}
int main(){
      int array[1000],num;
    cout<<"Enter number of elements:";
  cin>>num;
  cout<<"Enter the elements:";
  for(int i=0; i<num; i++){
   cin>>array[i];
  }
  num=RemoveDuplicate(array,num);
  cout<<"Elements after removing duplicates:";
  for(int i=0; i<num; i++){
    cout<<array[i]<<" ";
  }
  return 0;
}
