#include<iostream>
#include<string.h>
using namespace std;
void removedup(char a[]){
    int n=strlen(a)-1;
    if(n==0 or n==1){
        return;
    }
    int prev=0,cur=1;
    for(;cur<=n;cur++){
        if(a[prev]!=a[cur]){
            prev++;
            a[prev]=a[cur];
        }
    }
    a[prev+1]='\0';
    return;
}
int main(){
    char a[100];
    cin.getline(a,100);
    cout<<"Before: "<<a<<endl;
    removedup(a);
    cout<<"After: "<<a;
    return 0;
}