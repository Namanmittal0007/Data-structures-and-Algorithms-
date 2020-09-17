#include<iostream>
using namespace std;
struct node{                            //structure of a circular linked list
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};

node* inserthead(node* head,int data){  //Inserting at the head position of the circular linked list
    node* temp=new node(data);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    temp->next=head->next;
    head->next=temp;
    int t=temp->data;
    temp->data=head->data;
    head->data=t;
    return head;
}
node* insertend(node* head,int data){   //Inserting at the End of the circular linked list
    node* temp=new node(data);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }
}
void traverse(node* head){              //Traversing the circular linked list
    if(head==NULL){
        return;
    }
    node* curr=head;
    do{
        cout<<curr->data<<"  ";
        curr=curr->next;
    }while(curr!=head);
}
node* deletehead(node* head){           //Deleting the Head
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* temp=head->next;
    head->data=temp->data;
    head->next=temp->next;
    delete temp;
    return head;
}
node* deleteKth(node* head,int k){      //Deleting the Kth node
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return deletehead(head);
    }
    node* curr=head;
    for(int pos=0;pos<(k-2);pos++){
        curr=curr->next;
    }
    node* temp=curr->next;
    curr->next=temp->next;
    delete temp;
    return head;
}
int main(){
    node *head=new node(10);
    //int x;
    head=deletehead(head);
    head=inserthead(head,10);
    for(int i=20;i<60;i+=10){
        head=insertend(head,i);
    }
    traverse(head);
    cout<<endl;
    head=deleteKth(head,3);
    traverse(head);
    cout<<endl;
    head=deleteKth(head,1);
    traverse(head);
    cout<<endl;
    return 0;
}