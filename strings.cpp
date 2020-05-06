#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s0;
    string s1("hello ");
    string s2="world ";
    string s3(s1);
    string s4=s2;
    char a[]={'a','b','c','d','\0'};
    string s5=a;
    cout<<s1<<s2<<s3<<s4<<s5<<endl;
    cout<<s0.empty()<<endl;
    s1.append(s2);
    cout<<s1<<endl;
    s3+="Naman";
    cout<<s3<<endl;
    s1.clear();
    cout<<s1;
    s0="apple";
    s1="mango";
    cout<<s0.compare(s1)<<endl;
    s1="I want to eat apple all alone";
    int x=s1.find("apple");
    cout<<x<<endl;
    s1.erase(14,strlen("apple"));
    cout<<s1<<endl;
    for(auto it=s1.begin();it<s1.end();it++){
        cout<<(*it)<<' ';
    }
    cout<<endl;
    for (auto c:s1){
        cout<<c<<' ';
    }

}