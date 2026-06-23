#include<iostream>
using namespace std;
char MaximumOccurringChar(char str[]){
    int maxCount = 0;
    char maxChar;
    for(int i = 0; str[i] != '\0'; i++){
        int count = 0;
    
       for(int j = 0; str[j] != '\0'; j++){
           if(str[i] == str[j]){
              count++;
           }
       }
       if(count > maxCount){
        maxCount = count;
        maxChar = str[i];
       }
    }
    return maxChar;
}
int main(){
    char str[100];

    cout<<"Enter string: ";
    cin>>str;

    cout<<"MAximum occuring character = "<<MaximumOccurringChar(str);
    return 0;
}
