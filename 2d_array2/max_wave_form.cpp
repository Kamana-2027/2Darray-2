//Write a program to print the matrix in wave form.

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row:";
    cin>>m;
    cout<<"enter column:";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
        else {
            for(int i=0;i<n;i++){
                cout<<a[i][j]<<" ";
            }
        }
       
    }


}