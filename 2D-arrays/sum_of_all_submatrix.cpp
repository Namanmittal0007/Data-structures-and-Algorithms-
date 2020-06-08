#include<iostream>
using namespace std;
int findsum(int a[][10],int n){
    int sum=0;
    for(int ti=0;ti<n;ti++){
        for(int tj=0;tj<n;tj++){
            for(int bi=ti;bi<n;bi++){
                for(int bj=tj;bj<n;bj++){
                    for(int i=ti;i<=bi;i++){
                        for(int j=tj;j<=bj;j++){
                            sum+=a[i][j];
                        }
                    }
                }
            }
        }
    }
    return sum;
}
int main(){
    int n,a[10][10];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1;
        }
    }
    cout<<"Sum: "<<findsum(a,n);
    return 0;
    
}