//binary search is a inbuilt function of Algorithm STL. f(n)=O(logn)
// but the array should be sorted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,4,6,7,9,9,12,15};
    int key,n=sizeof(arr)/sizeof(int);
    cin>>key;
    bool cond=binary_search(arr,arr+n,key);
    if(cond){
        cout<<"Element is present.";
    }
    else
        cout<<"Element is not present.";
    //lower bound tells the first occurance of the lement in the array and if not then return the address of next element.
    int lb=lower_bound(arr,arr+n,key)-arr;
    cout<<endl<<"Lower bound: "<<lb<<endl;
    //upper bound will always point to the add of the element given as the key
    int ub=upper_bound(arr,arr+n,key)-arr;
    cout<<"Upper bound: "<<ub;
    //Frequency of any no. can be determined by ub-lb
    int freq=ub-lb;
    cout<<endl<<freq;
    return 0;
}