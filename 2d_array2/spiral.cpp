//given a positive integer n ,generate a nXn matix filled with element from 1 to n square in spiral order

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int minr=0, maxr=n-1;
        int minc=0,maxc=n-1;
        int tne=n*n;
        int count=0;
        int i,j;
        int a=1;
       
        while(count<tne){
            //right
            for(j=minc;j<=maxc && count<tne;j++){
                matrix[minr][j]=a++;
                count++;
            }
            minr++;
            //down
            for(i=minr;i<=maxr && count<tne;i++){
                matrix[i][maxc]=a++;
                count++;
            }
            maxc--;
            //left
             for(j=maxc;j>=minc && count<tne;j--){
               matrix[maxr][j]=a++;
                count++;
            }
            maxr--;
            //up
             for(i=maxr;i>=minr && count<tne;i--){
               matrix[i][minc]=a++;
                count++;
            }
            minc++;

        }
        return matrix;
    }


//predict output

//1234