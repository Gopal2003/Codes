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

Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        cout<<"SLL is Empty";
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

Node *deleteAtAny(Node *head,int position){
    if(head==NULL){
        return head;
    }
    if(position==0){
        return deleteHead(head);
    }
    Node *curr=head;
    for(int i=0;i<position-1;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
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
    int n,pos,elem;
    cin>>n;
    if(n>=0 && n<=1000){
        for(int i=0;i<n;i++){
            cin>>elem;
            head=insertAtEnd(head,elem);
        }
        cin>>pos;
        if(pos<=n && pos>=0){
        head=deleteAtAny(head,pos);
        printList(head);
        }
        else{
            cout<<"Invalid Position";
        }
    }
}