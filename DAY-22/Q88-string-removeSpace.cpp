#include<iostream>
using namespace std;
void RemoveSpace(char name[]){

    int j = 0; 
    for(int i = 0; name[i] != '\0'; i++){

        if (name[i] != ' '){
            
            name [j] = name[i];
            j++;
        }
    }
    name[j] = '\0';

}
int main(){
    char sentence[1000];

    cout<<"Enter sentence:"<<endl;
    cin.getline(sentence,1000);
     
    RemoveSpace(sentence);
    cout<<"Sentence after removing spaces :"<<endl<<sentence;
    return 0;

}