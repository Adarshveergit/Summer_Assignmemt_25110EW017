#include<iostream>
using namespace std;
int main(){
    int num,i=2, count=0;
    cout<<"Enter the number :";
    cin>>num;
   while(i<=num/2){ 
    if(num%i==0){
        count=count+1;
    }
    i++;
    
}
if(count==0 && num>1){
  cout<<" prime"<<endl;

}
else{
    cout<<" not prime"<<endl;
}
    return 0;
}