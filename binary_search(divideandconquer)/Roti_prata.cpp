//https://www.spoj.com/problems/PRATA/
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int* a,int p,int c,int mid){
    int count=0;
    for(int i=0;i<c;i++){
        int x=1,time=mid;
        time=time-(a[i]*x++);
        while(time>=0){
            count++;
            time=time-(a[i]*x++);
        }
        if(count>=p){
            return true;
        }
    }
    return false;
}
int main(){
    int t,p,c;
    cin>>t;
    while(t-->0){
        cin>>p>>c;
        int *a=new int[c];
        for(int i=0;i<c;i++){
            cin>>a[i];
        }
        sort(a,a+c);
        int s=0,e=a[0]*((p*(p+1))/2),ans=-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(ispossible(a,p,c,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}