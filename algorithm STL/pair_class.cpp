#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> x;
    x.first=1;
    x.second=2;
    cout<<x.first<<" "<<x.second<<endl;
    vector<pair<int,string>> a;
    a.push_back(make_pair(10,"Ten"));
    cout<<a[0].first<<" "<<a[0].second;
}