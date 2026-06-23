#include<iostream>
using namespace std;
bool isAnagram(char str1[], char str2[]){
    int freq1[26] = {0};
    int freq2[26] = {0};

    int i;
    for(i = 0; str1[i] != '\0'; i++){
        freq1[str1[i] - 'a']++;
    }
    for(i = 0; str2[i] != '\0'; i++){
        freq2[str2[i] - 'a']++;
    }
    for(i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    char str1[100], str2[100];
    cout<<"Enter first string: ";
    cin>>str1;

    cout<<"Enter second string: ";
    cin>>str2;

    if(isAnagram(str1, str2)){
        cout<<"Anagram string: ";
    }
    else{
        cout<<"Not anagram strings: ";
    }
    return 0;
}