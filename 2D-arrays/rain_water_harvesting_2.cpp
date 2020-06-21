#include<bits/stdc++.h>
using namespace std;
void findwater(int a[],int n){
    int left[n]={0},right[n]={0};
    left[0]=a[0];
    for(int i=1;i<n;i++){
        left[i]=max(a[i],left[i-1]);
    }
    right[n-1]=a[n-1];
    for(int j=n-2;j>-1;j--){
        right[j]=max(a[j],right[j+1]);
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        water+=(min(left[i],right[i])-a[i]);
    }
    cout<<water;
}
int main(){
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findwater(a,n); 
}