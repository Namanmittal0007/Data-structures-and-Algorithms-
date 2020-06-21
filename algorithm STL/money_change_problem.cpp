#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
 //   cout<<a<<" "<<b<<endl;
    return a<=b;
}
int main(){
    int a[]={1,2,5,10,20,50,100,200,500,2000};
    int amount=468;
    while(amount>0){
        int lb=upper_bound(a,a+10,amount)-a-1;
        cout<<a[lb]<<",";
        amount=amount-a[lb];
    }
    return 0;
}