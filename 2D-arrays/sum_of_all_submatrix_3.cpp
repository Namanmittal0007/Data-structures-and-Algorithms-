#include<iostream>
using namespace std;
int findsum(int a[][10],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j]*((i+1)*(j+1)*(n-i)*(n-j));
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