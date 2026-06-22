#include<iostream>
using namespace std;
bool isPalindrome(char name[]){
    int n = 0;
    for(int i = 0; name[i] != '\0'; i++){
        n++;
    } 
     int first = 0;

     int last = n-1;

      while(first <= last){

        if(name[first] != name[last]){
            return 0;
        }
        first++;
        last--;
        
        
    }
    return 1;
}
int main(){
    char word[100];
    cout<<"Enter word:"<<endl;
    cin>>word;

    if(isPalindrome(word)){

        cout<<"Palindrome string";

    }
    else{
        cout<<"Not a palindrome string :";
    }
    return 0;

}
