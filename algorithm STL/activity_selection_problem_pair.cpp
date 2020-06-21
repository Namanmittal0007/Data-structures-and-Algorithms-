#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while((t--)>0){
        vector<pair<int, int>> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),compare);
        int task=1;
        int lasttaskend=v[0].second;
        for(int i=1;i<n;i++){
            if(lasttaskend<=v[i].first){
                task++;
                lasttaskend=v[i].second;
            }
        }
        cout<<task<<endl;
    }
    return 0;
}
