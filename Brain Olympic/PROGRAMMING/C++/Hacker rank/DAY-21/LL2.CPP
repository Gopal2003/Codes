#include<bits/stdc++.h>
using namespace std;

struct Node{
    string data;
    Node *next;
    Node *prev;
    Node(string c){
        data=c;
        next=NULL;
        prev=NULL;
    }
};

Node *insertAtEnd(Node *head,string name){
    Node *temp=new Node(name);
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

Node *reverseList(Node *head){
      Node *curr=head;
      Node *prev=NULL;
      while(curr!=NULL){
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
      }
      return prev;
}

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head=NULL;
    string name,extraName;
    for(int i=0;i<5;i++){
        cin>>name;
        head=insertAtEnd(head,name);
    }
    head=reverseList(head);
    cin>>extraName;
    head=insertAtEnd(head,extraName);
    printList(head);
}