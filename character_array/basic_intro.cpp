#include<iostream>
using namespace std;
int main(){
    char a[]={'a','b','c'};
    int b[]={1,2,3};
    cout<<a<<endl<<b<<endl; 
    //the output of 'a' will be the char array while 'b' will be address because of operartor overloading
    //and the output of 'a' here wont be desireable as it doesn't have a null char at the end of the char array
    char c[]="abc";
    cout<<sizeof(a)<<"\t"<<sizeof(c); 
    //size of 'c' will be 4 as it will automatically writres a '\0' null char at the end, and that also takes space of 1 char
    return 0;
}