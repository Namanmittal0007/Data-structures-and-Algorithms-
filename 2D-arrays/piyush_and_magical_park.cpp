//https://www.youtube.com/watch?v=3J1tAsoZ7-g
#include<iostream>
using namespace std;
int main(){
    char a[100][100];
    int n,m,k,s;
    bool success=true;
    cin>>n>>m>>k>>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s<k){
                success=false;
                break;
            }
            if(a[i][j]=='.'){
                s-=2;
            }
            else if(a[i][j]=='*'){
                s+=5;
            }
            else{
                break;
            }
            if(j!=n-1){
                s--;
            }
        }
    }
    if(success){
        cout<<"Yes, "<<s;
    }
    return 0;
}