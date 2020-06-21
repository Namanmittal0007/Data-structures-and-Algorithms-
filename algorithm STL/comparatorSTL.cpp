//here i have used custom comparator for bubble sort and have passed a compare to it
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
bool compare2(int a,int b){
    return a<b;
}
int main(){
    int a[]={2,5,3,8,9,1,7,6,4};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(compare2(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}