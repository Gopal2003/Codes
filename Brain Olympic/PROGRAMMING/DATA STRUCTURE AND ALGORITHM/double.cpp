#include<iostream>
using namespace std;

struct Node{
    Node *next;
    Node *prev;
    int data;
      Node(int d){
        data=d;
        next=prev=NULL;
      }
};

Node *insertAtEnd(Node *head,int x){
       Node *temp=new Node(x);
       if(head==NULL){
        return temp;
       }
       Node *curr=head;
       while(curr->next!=NULL){
             curr=curr->next;
       }
       curr->next=temp;
       temp->prev=curr;
       return head;
}
void printNode(Node* head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head=NULL;
    int elem;
    cout<<"enter 5 element";
    for(int i=0;i<5;i++){
        cin>>elem;
        head=insertAtEnd(head,elem);
    }
    printNode(head);
}