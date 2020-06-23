#include<bits/stdc++.h>
using namespace std;
bool placecow(int *x,int n,int c,int mid){
    int count=1,lastcow=x[0];
    for(int i=1;i<n;i++){
        if(x[i]-lastcow>=mid){
            lastcow=x[i];
            count++;
            if(count==c){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,c;
        cin>>n>>c;
        int *x=new int[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x,x+n);
        int s=x[0],e=x[n-1]-x[0],ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(placecow(x,n,c,mid)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}