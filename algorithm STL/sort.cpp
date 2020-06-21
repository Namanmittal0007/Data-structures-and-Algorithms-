#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    int a[]={4,4,1,9,3,6,3,8,2,6};
    int n=sizeof(a)/sizeof(int);
    cout<<"Unsorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //used sort function of the STL to sort in inc order, sort() uses a hybrid implementation of multiple sorts
    sort(a,a+n);
    cout<<"Sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Descending: ";
    //Sorting in descending order by passing a custom comparator to the inbuilt function as a argument
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}