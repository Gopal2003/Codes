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

Node *DeleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    else{
    Node *temp=head->next;
    delete(head);
    return temp;
    }
}
void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}


main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printList(head);
    head=DeleteHead(head);
    cout<<endl;
    printList(head);
}