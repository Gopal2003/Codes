#include<bits/stdc++.h>
using namespace std;

struct Node{
   int data;
   Node *next;

   Node(int x){
    data=x;
    next=NULL;
   }
};
  

Node *insertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
    Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
    }
}

void printList(Node *head){
    if(head==NULL){
        return;
    }
    Node *curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
}
Node *pop(Node *head){
    if(head==NULL){
        cout<<"Underflow";
        return NULL;
    }
    if(head->next==head){
        delete(head);
        cout<<"CLL is Empty";
        return NULL;
    }
    Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    Node *temp=head;
    head=head->next;
    curr->next=head;
    delete(temp);
    return (head);
    
}
int main(){
    Node *head=NULL;
    int N,elem;
    cin>>N;
    if(N>=0 && N<=1000){
        for(int i=0;i<N;i++){
            cin>>elem;
            head=insertAtEnd(head,elem);
        }
        head=pop(head);
        printList(head);
    }
    else{
        cout<<"Invalid Number";
    }
}