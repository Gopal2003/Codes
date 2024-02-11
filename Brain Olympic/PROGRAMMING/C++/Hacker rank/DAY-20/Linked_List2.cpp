#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *next;
     Node (int x){
        data=x;
        next=NULL;
     }
};

Node *insertAtEnd(Node *head,int elem){
    Node *temp=new Node(elem);
    if(head==NULL){
        return temp;
    }

    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return(head);
}

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    int N,X;
    Node *head=NULL;
    cin>>N;
    if(N>5 && N<10){
        for(int i=0;i<N;i++){
         cin>>X;
         head=insertAtEnd(head,X);
        }
    }
    printList(head);
}