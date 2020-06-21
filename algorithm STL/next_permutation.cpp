//next_permutation will always print the bigger permutation available for the elements.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,3};
	do{
		for(int i=0;i<3;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}while(next_permutation(arr,arr+3));
	return 0;
}