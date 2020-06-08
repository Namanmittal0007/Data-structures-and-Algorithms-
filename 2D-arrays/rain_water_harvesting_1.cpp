#include<iostream>
#include<algorithm>
using namespace std;
void findwater(int a[],int n){
    int water=0;
    for(int i=1;i<n-1;i++){
        int left=a[i];
        for(int j=0;j<i;j++){
            left=max(left,a[j]);
        }
        int right=a[i];
        for(int j=i+1;j<n;j++){
            right=max(right,a[j]);
        }
        water+=(min(left,right)-a[i]);
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