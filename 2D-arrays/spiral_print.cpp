#include<iostream>
using namespace std;
void spiral(int a[][100],int m,int n){
    int sr=0,sc=0,ec=n-1,er=m-1;
    while(sr<=er and sc<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++){
            cout<<a[i][ec]<<" ";
        }
        ec--;
        if(sr<=er){
        for(int i=ec;i>=sc;i--){
            cout<<a[er][i]<<" ";
        }
        }
        er--;
        if(sc<=ec){
        for(int i=er;i>=sr;i--){
            cout<<a[i][sc]<<" ";
        }
        }
        sc++;
    }
}
int main(){
    int x=0,m,n,a[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=++x;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }cout<<"\n";
    }
    spiral(a,m,n);
    return 0;
}