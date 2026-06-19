#include<iostream>
using namespace std;
int digonalSum(int a[][10], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i][i];

    }
    return sum;
}
int main(){
    int a[10][10];
    int n;
    cout<<" Ente size of square matrix: ";
    cin>>n;
    cout<<"Enter matrix:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
        cout<<endl;   
    
     }
     cout<<"Digonal sum = "<<digonalSum(a,n);

     return 0;
}