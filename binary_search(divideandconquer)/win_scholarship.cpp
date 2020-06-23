#include<bits/stdc++.h>
using namespace std;
bool ispossible(int n,int m,int x,int y,int mid){
	if((m+(n-mid)*y)>=mid*x){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int s=0,e=n,ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(ispossible(n,m,x,y,mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
}