//This program is used when we want to find the sum of particular submatrix where the topleft and bottomright of the submatrix is provided.
//2 ways to do this 1.brute force i.e from i=ti->bi and j=tj->bj O(M*N*Q)    2.prefix sum matrix(and this is usefull when there are Q number of queries) O(M*N +Q) 
#include<iostream>
using namespace std;
int findsum(int a[][10],int n){
    int sum=0,ti,tj,bi,bj;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            a[i][j]=a[i][j]+a[i][j-1];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=a[i][j]+a[i-1][j];
        }
    }
    cin>>ti>>tj>>bi>>bj;
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