#include<iostream>
using namespace std;
void CountVowelsConsonants(char name[]){
    int vowels = 0 ; 
    int consonants = 0;
    for(int i = 0; name[i] != '\0'; i++ ){

        if ( (name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
        {
            if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'

             || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U'){
                
                vowels++;
             }
             else{
                consonants++;
             }
        }
    }
    cout<<"Vowels = "<<vowels <<endl;
    cout<<"Consonants = "<<consonants<<endl;
} 
int main(){
    char word[100];
    cout<< "Enter word: "<<endl;
    cin>>word;
    CountVowelsConsonants(word);
    return 0;
}