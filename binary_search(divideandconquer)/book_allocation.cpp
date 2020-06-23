//https://hack.codingblocks.com/app/practice/1/1365/problem
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int* a,int n,int m,int mid){
	int count=1,pagesread=a[0];
	for(int i=1;i<n;i++){
		if(a[i]+pagesread>mid){
			pagesread=a[i];
			count++;
		}
		else{
			pagesread+=a[i];
		}
	}
	if(count>m){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	int t,n,m;
	cin>>t;
	while(t-->0){
		cin>>n>>m;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long int s=a[n-1],e=0;
		for(int i=0;i<n;i++){
			e+=a[i];
		}
		int ans=-1;
		while(s<=e){
			int mid=(s+e)>>1;
			if(ispossible(a,n,m,mid)){
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