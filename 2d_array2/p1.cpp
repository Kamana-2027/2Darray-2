//Write a program to print the elements of both the diagonals in a square matrix.

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row:";
    cin>>m;
    cout<<"enter column:";
    cin>>n;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j==m-1)){
                cout<<a[i][j];
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

}