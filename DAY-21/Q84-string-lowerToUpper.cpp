#include<iostream>
using namespace std;
void toUppercase(char name[]){
    
    for(int i = 0; name[i] != '\0'; i++){

        if(name[i] >= 'a' && name[i] <= 'z'){

            name[i] = name[i] - 32;

        }
        
    }
}
int main(){
    char word[100];
    cout<<"Enter word : ";
    cin>>word;
    
    toUppercase(word);
    cout<<"Upper case string is : "<<word<<endl;
     return 0;
}