//LL INSERTION

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
Node *insertAtEnd(Node *head,int element){
    Node *temp=new Node(element);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

Node *insertAtAny(Node *head,int position,int newElement){
    Node *temp=new Node(newElement);
    if(position==1){
       temp->next=head;
       return temp; 
    }
    Node *curr=head;
    for(int i=0;i<position-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
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
    int elem,pos,newElem;
    for(int i=0;i<5;i++){
        cin>>elem;
        head=insertAtEnd(head,elem);
    }
    cout<<endl;
    cin>>pos;
    cout<<endl;
    cin>>newElem;
    head=insertAtAny(head,pos,newElem);
    printList(head);
    
}