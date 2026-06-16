#include<iostream>
using namespace std;
void findPair(int arr[],int n,int sum){
    for(int  i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] + arr[j] == sum){
                cout<<"Pair is: "<<arr[i]<<","<<arr[j];
                return ;
            }
        }
    }
    cout<<"No pair found:";
}
int main(){
    int array[1000],num,sum;
    cout<<"Enter number of elements:";
  cin>>num;
  cout<<"Enter the elements:";
  for(int i=0; i<num; i++){
   cin>>array[i];
  }
  cout<<"Enter required sum: ";
  cin>>sum;
  findPair(array, num, sum);
  return 0;
}