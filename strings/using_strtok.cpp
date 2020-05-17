#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[]="Today is a rainy day";
    char *ptr=strtok(a," ");
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;

}