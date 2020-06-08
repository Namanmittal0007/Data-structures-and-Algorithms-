#include<iostream>
using namespace std;
int findsum(int a[][10],int n){
    for(int i=0; i<n;i++){
        for(int j=1;j<n;j++){
            a[i][j]=a[i][j-1]+a[i][j];
        }
    }
    for(int i=0; i<n;i++){
        for(int j=1;j<n;j++){
            a[j][i]=a[j-1][i]+a[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int sum=0;
    for(int ti=0;ti<n;ti++){
        for(int tj=0;tj<n;tj++){
            for(int bi=ti;bi<n;bi++){
                for(int bj=tj;bj<n;bj++){
                    if(ti==0 and tj==0){
                        sum+=a[bi][bj];
                    }
                    else if(ti==0){
                        sum+=a[bi][bj]-a[tj-1][bi];
                    }
                    else if(tj==0){
                        sum+=a[bi][bj]-a[ti-1][bj];
                    }
                    else{
                        sum+=a[bi][bj]-a[ti-1][bj]-a[tj-1][bi]+a[ti-1][tj-1];
                    }
                }
            }
        }
    }
    return sum;
}
int main(){
    int a[10][10],n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1;
        }
    }
    cout<<findsum(a,n);
    return 0;
}