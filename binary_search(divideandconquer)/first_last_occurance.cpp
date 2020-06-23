#include<bits/stdc++.h>
using namespace std;
int firstocc(int a[],int n,int key){
    int s=0,e=n,found_at=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            found_at=mid;
            e=mid-1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return found_at;
}
int lastocc(int a[],int n,int key){
    int s=0,e=n,found_at=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            found_at=mid;
            s=mid+1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return found_at;
}
int main(){
    int a[]={0,1,2,3,3,4,5,6,7,7,7,8,9},key,n=sizeof(a)/sizeof(int)-1;
    cin>>key;
    int first=firstocc(a,n,key);
    int last=lastocc(a,n,key);
    cout<<"First: "<<first<<" last: "<<last;
}