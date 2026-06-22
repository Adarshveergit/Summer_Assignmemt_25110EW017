#include<iostream>
using namespace std;
void reverseString(char name[]){
    int n = 0;
    while(name[n]!= '\0'){
        n++;
    }

      int first = 0;

      int last = n-1;

      while(first < last){

        swap(name[first++] , name[last--]);

      }
}
int main (){
    char word[1000];
  
    cout<<"Enter the word:"<<endl;
    cin>>word;

    reverseString(word);
    cout<<"Reverse of word is :"<<endl;
    cout<<word;

    return 0;

}