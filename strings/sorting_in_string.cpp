/*I am trying to sort the string using the sort() functions 
in this program and even passing a custom comparator to it.*/
#include<iostream>
#include<string.h>
#include<algorithm> //sort() is there in this header file.
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}
int main(){
    int n;
    cin>>n;
    cin.get();//for that '\n' after entering value of n.
    string s[10];//array of strings
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    cout<<"Before sorting."<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    sort(s,s+n,compare);
    cout<<"Afetr sorting."<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
