#include<iostream>
using namespace std;
int main(){
    int a[10][10],m,n,var=1;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=var;
            var+=1;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;
    }
    for(int col=0;col<n;col++){
        if(col%2==0){
            for(int row=0;row<m;row++){
                cout<<a[row][col]<<"  ";
            }
        }
        else{
            for(int row=m-1;row>-1;row--){
                cout<<a[row][col]<<"  ";
            }
        }
    }
    return 0;
}