#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int key,s=0,e=sizeof(a)/sizeof(int)-1;
    cin>>key;
    while(s<=e){
        int mid=(s+e)>>1;
        if(a[mid]==key){
            cout<<mid;
            break;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return 0;
}