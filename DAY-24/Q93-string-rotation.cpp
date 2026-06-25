#include<iostream>
using namespace std;
bool isRotation(char str1[],char str2[]){
    int n1 = 0, n2 = 0;
    n1++;

      while(str1[n1] != '\0')
    n1++;

    while(str2[n2] != '\0')
    n2++;

    if(n1 != n2)
    return false;

    for(int shift = 0; shift < n1; shift++){
        bool match = true;

        for(int i = 0; i < n1; i++){
           if(str1[(i + shift) % n1] != str2[i]){
            match = false;
            break;
           }
        }
        if(match)
        return true;
    }
    return false;
}
int main(){
    char str1[100], str2[100];

    cout<<"Enter first string: ";
    cin>>str1;

    cout<<"Enter secpond string: ";
    cin>>str2;

    if(isRotation(str1, str2))
    cout<<"String are rotations: ";
    else
    cout<<"String are not rotations: ";

    return 0;
}