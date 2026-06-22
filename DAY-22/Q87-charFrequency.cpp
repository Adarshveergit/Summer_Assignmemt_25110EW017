#include<iostream>
using namespace std;
void characterFrequency(char str[]){
    for(int i = 0; str[i] != '\0'; i++){

        bool alreadyCounted = false;

        for(int k = 0; k < i; k++){
            if(str[i] == str[k]){
                alreadyCounted = true;
                break;

            }
        }
        if(alreadyCounted){
            continue;
        }
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++){
            
            if(str[i] == str[j]){
                count++;
            }
        }
        cout<<str[i]<<" = "<<count<<endl;

    }
}
int main(){
    char word[100];
    cout<<"Enter a word: "<<endl;
    cin>>word;

    characterFrequency(word);

    return 0;
}