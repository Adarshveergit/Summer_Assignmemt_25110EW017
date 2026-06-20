#include<iostream>
using namespace std;
void multiplyMatrix(int a[][10], int b[][10], int c[][10], int n){
    for(int  i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;

            for(int k = 0; k < n; k++){
                c[i][j] = a[i][k] * b[k][j];
            }

        }
    }
}
int main(){
    int a[10][10], b[10][10], c[10][10];
    int n;
    cout<<"Enter size of matrix:";
    cin>>n;

     cout<<"Enter first matrix:"<<endl;
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){
            
            cin>>a[i][j];
        }
    }
    cout<<"Enter second matrix:"<<endl;
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cin>>b[i][j];
        }
    }
    multiplyMatrix(a, b, c, n);
    cout<<"Product matrix: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}