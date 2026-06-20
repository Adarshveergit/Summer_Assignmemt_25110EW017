#include<iostream>
using namespace std;
void Row_WiseSum(int a[][10], int row, int col){
    int sum;
    for(int i = 0; i < row; i++){
        sum = 0;
        for (int j = 0; j < col; j++){
            sum = sum + a[i][j];
        }
        cout<<"Row "<<i+1<<" sum "<<sum<<endl;
    }
}
int main(){
    int a[10][10]; 
    int row, col;
    cout<<"Enter row and column: ";
    cin>>row>>col;
    cout<<"Enter Matrix :";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>a[i][j];
        }
    }
    Row_WiseSum(a,row,col);
    return 0;
}