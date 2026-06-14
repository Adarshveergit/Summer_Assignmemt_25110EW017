#include<iostream>
using namespace std;
int linearSearch(int arr[],int n ,int search){
    
    for(int i=0;i<n;i++){

        if(arr[i]==search){
            
            return 1;

        }
        
    }
    
        return 0;
    
}
int main(){
    int array[1000],num,search;

    cout<<"Enter the number of element: ";
    cin>>num;

    cout<<"Enter the element:";

    for(int i=0; i<num; i++ ){

        cin>>array[i];

    }
    cout<<"Enter the number you want to search:";
    cin>>search;

   if(linearSearch( array, num, search )){
    cout<<"Found:";

   }
   else{
    cout<<"Not found:";

   }


    return 0;

}