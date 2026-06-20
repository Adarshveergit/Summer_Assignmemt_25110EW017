#include<iostream>
using namespace std;
bool symmetricMatrix(int a[][10], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int a[10][10];
    int n;
    cout<<"Enter size of matrix :";
    cin>>n;
    cout << "Enter matrix: "<<endl;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    if(symmetricMatrix(a,n)){
        cout<<"Matrix is symmetric:";
    }
    else{
        cout<<"MAtrix is not symmetric: ";
    }
    return 0;
}