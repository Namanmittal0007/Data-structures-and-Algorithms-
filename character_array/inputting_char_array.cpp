#include<iostream>
using namespace std;
void gettingchararray(char a[],int max){
    int i=0;
    char ch=cin.get();
    //this will get a single char only
    //custom delim
    while(ch!='\n'){
        
            a[i]=ch;
            i++;
        if(i==max-1)
        {   
            break;
        }
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
    char a[100],b[100];
    //cin>>a;
    //cin.get();
    //cin>>b;
    //this will take input till a space, tab or newline char is encountered
    gettingchararray(b,100);
    //cout<<a;
    cout<<endl<<b;
    return 0; 
}