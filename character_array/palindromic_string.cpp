#include<iostream>
#include<string.h>
using namespace std;
bool ispalindrome(char a[]){
    int i=0,j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char a[100];
    cin.getline(a,100);
    if(ispalindrome(a)){
        cout<<"The string is palindrome";
    }
    else{
        cout<<"The string isn't palindromic";
    }
    return 0;
}