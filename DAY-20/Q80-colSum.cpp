#include<iostream>
using namespace std;
void Row_WiseSum(int a[][10], int row, int col){
    int sum;
    for(int j = 0; j < row; j++){
        sum = 0;
        for (int i = 0; i < col; i++){
            sum = sum + a[i][j];
        }
        cout<<"Row "<<j+1<<" sum "<<sum<<endl;
    }
}
int main(){
    int a[10][10]; 
    int row, col;
    cout<<"Enter row and column: ";
    cin>>row>>col;
    cout<<"Enter Matrix :"<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>a[i][j];
        }
    }
    Row_WiseSum(a,row,col);
    return 0;
}