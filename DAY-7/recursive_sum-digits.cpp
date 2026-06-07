#include<iostream>
using namespace std;
int sumofDigits(int num){
    if(num==0){
        return 0;
    }
    else{
        return (num%10)+sumofDigits(num/10);
    }

}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum of digits: "<<sumofDigits(num);
    return 0;
}
