//We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. 
//Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,ans=0,a;
    cin>>t;
    while(t-->0){
        ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            ans=ans^a;
        }
        cout<<ans;
    }
    return 0;ṇ
}