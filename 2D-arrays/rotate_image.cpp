//rotate a matrix by 90deg because pixel in image is also stored as matrix
#include<iostream>
#include<algorithm>
using namespace std;
void rotate(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        reverse(a[i],a[i]+n);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(i<j){ 
            swap(a[i][j],a[j][i]);
           }
        }
    }
}
int main(){
    int a[100][100],m,n,x=0;
    //rows=cols(msut) i.e square matrix
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=++x;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate(a,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}