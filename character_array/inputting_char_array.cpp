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
    char a[100],b[100],c[100];
    cin>>a;
    cin.get();
    gettingchararray(b,100);//this will take input till a space, tab or newline char is encountered
    cin.get();
    cin.getline(c,100,'$');//(variable,var_length,delimeter)
    //here in the input the first word will be given as a value to "a" and the space or null will be consumed by cin.get() and after that whole string till newline will be given to  b 
    cout<<a<<endl<<b<<endl<<c;
    return 0; 
}