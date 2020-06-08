#include<iostream>
#include<algorithm>
using namespace std;
void findtriplets(int a[],int n,int x){
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            if(x==(a[i]+a[l]+a[r])){
                cout<<a[i]<<" , "<<a[l]<<" and "<<a[r]<<endl;
                l++;
                r--;
            }
            else if(x>(a[i]+a[l]+a[r])){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return ;
}
int main(){
    int a[10000],n,target;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>target;
    findtriplets(a,n,target);
}