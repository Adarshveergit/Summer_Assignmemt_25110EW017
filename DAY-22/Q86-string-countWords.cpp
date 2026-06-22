#include<iostream>
using namespace std;
int countWords(char name[]){
    int words = 1;

    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] == ' '){
            words++;
        }
    }
    return words;
}
int main(){
    char sentence[1000];
    cout<<"Enter a sentence: "<<endl;
    cin.getline(sentence,1000);
    
    cout<<"Number of words = "<<countWords(sentence);
    return 0;
}