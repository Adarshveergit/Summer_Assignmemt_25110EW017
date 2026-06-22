#include<iostream>
using namespace std;
int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char word[1000];
    cout<<"Enter a word "<<endl;
    cin>>word;
    cout<<" Length of word is "<<getLength(word)<<endl ;
    return 0;
}