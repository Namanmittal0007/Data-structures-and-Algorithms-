//count number of set bits in range x-y, x and inclusive
// eg 10-15=17 
#include<iostream>
using namespace std;
int main() {
	int t,x,y,ans;
	cin>>t;
	while(t-->0){
		ans=0;
		cin>>x>>y;
		for(int i=x;i<=y;i++)
			ans+=__builtin_popcount(i);
		cout<<ans<<endl;
	}
	return 0;
}