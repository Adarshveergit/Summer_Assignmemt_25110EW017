#include<iostream>
using namespace std;
void subtractMatrix(int a[][10], int b[][10], int c[][10], int row, int col){

    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){

            c[i][j] = a[i][j] - b[i][j];

        }
    }
}
int main(){
    int a[10][10], b[10][10], c[10][10];
    int row, col;

    cout<<" ENter rows and column :"<<endl;
    cin>>row>>col;

    cout<<"Enter first matrix:"<<endl;
    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){
            
            cin>>a[i][j];
        }
    }
    cout<<"Enter second matrix:"<<endl;
    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            cin>>b[i][j];
        }
    }
    subtractMatrix(a, b, c, row, col);

    cout<<"Subract matrix: "<<endl;
    for(int i = 0; i < row; i++){
        
        for(int j = 0; j < col; j++){

            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}