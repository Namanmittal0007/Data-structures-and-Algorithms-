#include<iostream>
using namespace std;
void suffixsumarray(int a[][10],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            a[i][j]=a[i][j]+a[i][j+1];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            a[i][j]=a[i][j]+a[i+1][j];
        }
    }
}
void maxsumsubmatrix(int a[10][10],int n){
    int x,y,max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
                x=i;
                y=j;
            }
        }
    }
    cout<<"Max sum submatrix is: ("<<x<<","<<y<<")-("<<n<<","<<n<<") and the sum is: "<<max;
}
int main(){
    int a[10][10],x=-5,n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=x++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    suffixsumarray(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    maxsumsubmatrix(a,n);
}