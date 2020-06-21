//Find function is a function from the Algorithm STL and provides with the address of the key element. f(n)=O(n)-becuase its linear search
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,5,2,4,6,8,4,2};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    int index=it-arr;
    cout<<key<<" is present at index: "<<index;
    return 0;
}