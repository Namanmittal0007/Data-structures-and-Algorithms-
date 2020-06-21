#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    rotate(a,a+4,a+n);
    cout<<"Rotate: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Swap: ";
    swap(a[0],a[n-1]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Reverse: ";
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Max: "<<max(5,2);
    cout<<endl<<"Min: "<<min(100,23);
    return 0;
}