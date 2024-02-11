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

int SearchElem(Node *head,int x){
    int pos=1;
    Node *curr=head;
    while(curr!=NULL){

    if(curr->data==x){
        return pos;
    }
    else{
        pos++;
        curr=curr->next;
    }
    }
    return -1;
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
    head->next=new Node(40);
    head->next->next=new Node(30);
    head->next->next->next=new Node(20);
    printList(head);
    cout<<endl<<"The element is in the position of "<<SearchElem(head,20);
}