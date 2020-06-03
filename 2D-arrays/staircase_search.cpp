#include<iostream>
using namespace std;
void staircase(int a[][10],int n,int x){
    int i=0,j=n-1;
    while (i<n and j>=0)
    {
        if(a[i][j]==x){
            cout<<"postion is: "<<i<<","<<j;
            return;
        }
        else if(x>a[i][j])
            i++;
        else
            j--;
    }
    
}
int main(){
    int n,a[10][10],x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=++x;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cin>>x;
    staircase(a,n,x);

}