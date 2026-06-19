#include <iostream>
using namespace std;
void TransposeMatrix(int a[][10],int t[][10], int row, int col){
    
    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            t[i][j] = a[j][i];
        }
    }
}
int main (){
    int a[10][10],t[10][10];
    int row, col;

    cout<<"Enter rows and column:"<<endl;
    cin>>row>>col;
    cout<<"Enter matrix:"<<endl;

    for(int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){

            cin>>a[i][j];
        }
        cout<<endl;
    }
    TransposeMatrix(a, t, row, col);
    cout<<" Transpose matrix is : "<<endl;

    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}