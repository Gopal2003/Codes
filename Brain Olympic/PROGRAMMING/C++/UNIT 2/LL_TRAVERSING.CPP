#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *nxt;
    Node(int x){
        data=x;
        nxt=NULL;
    }
};

void printList(Node *head){
         Node *curr=head;
         while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->nxt;
         }
}
main(){
    Node *head=new Node(10);
    head->nxt=new Node(20);
    head->nxt->nxt=new Node(30);
    head->nxt->nxt->nxt=new Node(40);
    printList(head);
}