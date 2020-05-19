#include<iostream>
#include<string.h>
using namespace std;
void largeststring(char lar[],char cur[]){
    int n,lar_len=0,cur_len=0;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(cur,100);
        cur_len=strlen(cur);
        if(cur_len>lar_len){
            strcpy(lar,cur);
            lar_len=cur_len;
        }
    }  
}
int main(){
    char lar[100],cur[100];
    largeststring(lar,cur);
    cout<<lar<<". And length is: "<<strlen(lar);
    return  0;
}