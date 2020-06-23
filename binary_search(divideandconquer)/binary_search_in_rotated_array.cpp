#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)>>1;
        if(a[mid]==key){
            cout<<"found at: "<<mid;
            break;
        }
        else if(a[s]<a[mid]){
            if(a[s]<=key and key<a[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(a[mid]<key and key<=a[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return 0;
}