#include<iostream>
using namespace std;
int main(){
    int initial_amount,final_amount,days;
    cin>>initial_amount;
    cin>>days;
    final_amount=initial_amount;
    for(int i=0;i<days;i++){
        final_amount+=0.01*final_amount;
    }
    cout<<final_amount;
    return 0;
}