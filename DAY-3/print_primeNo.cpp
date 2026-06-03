#include<iostream>
using namespace std;
int main(){
    int i=2,min_num,max_num;
    cout<<"Enter the lower number:";
    cin>> min_num;
    cout<<"Enter the max number:";
    cin>>max_num;
    for(int num=min_num; num<=max_num;num++){
        int count=0;
        for(int i=2; i<num;i++){
           if(num%i==0)
            count++;
        }
        if(count==0){
            cout<<num<<",";
        }
       
    }
    cout<<endl;

    return 0;
   
}