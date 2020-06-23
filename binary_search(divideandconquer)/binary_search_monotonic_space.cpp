//finding square root of a number using binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,e;
    cin>>n;
    e=n;
    int anss=0;
    while(s<=e){
        int mid=(s+e)>>1;
        if(mid*mid==n){         //if its perfect root it will break
            anss=mid;
            break;
        }
        if(mid*mid<n){          //if mid^2 is less s will be above it
            anss=mid;
            s=mid+1;
        }
        else{
            e=mid-1;            //if mid^2 is greater then we will decrease mid
        }
    }
    cout<<anss;
    return 0;
}