#include<iostream>
using namespace std;
void  CompressString(char str[]){
    for(int i = 0; str[i] != '\0'; ){
        int count = 1;
        while(str[i] == str[i+1]){
            count++;
            i++;
        }
        cout<<str[i]<<count;
        i++;
    }
}
int main(){
    char str[100];
    cout<<"Enter string :";
    cin>>str;

    CompressString(str);
    return 0;
}