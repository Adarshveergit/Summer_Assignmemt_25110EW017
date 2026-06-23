#include<iostream>
using namespace std;
char firstRepeating(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        int count = 0;
        for(int j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count > 1){
            return str[i];
        }
    }
    return '\0';
}
int main(){
    char word[100];

    cout<<"Enter a word: ";
    cin>>word;
    char ch = firstRepeating(word);
    if(ch != '\0'){
        cout<<"First repeating character: "<<ch;

    }
    else{
        cout<<"No repeating character found: ";

    }
    return 0;
}