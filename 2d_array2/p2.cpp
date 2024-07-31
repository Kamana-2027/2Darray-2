//Write a program to rotate the matrix by 90 degrees anti-clockwise.

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
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            t[i][j]=a[j][i];
        }
    }

    for(int c=0;c<n;c++){
        int i=0;
        int j=n-1;
        while(i<=j){
            swap(t[i][c],t[j][c]);
            i++;
            j--;

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
}