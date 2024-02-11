#include<iostream>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insertCircular(Node *head,int x){
     Node *temp=new Node(x);
     if(head==NULL){
        temp->next=temp;
        return temp;
     }
     Node *curr=head;
     while(curr->next!=head){
        curr=curr->next;
     }
     curr->next=temp;
     temp->next=head;
     return head;
}

Node *deleteFirstNode(Node *head){
    Node *curr=head;
    Node *temp=NULL;
    while(curr->next!=head){
        curr=curr->next;
    }
    head->next=temp;
    curr->next=head->next;
    return temp;

}

void printNode(Node* head){
    if(head==NULL){
        return;
    }
    Node *curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
       
    }while(curr!=head);
    
    
}

int main(){
    Node *head=NULL;
    int elem,N;
    cin>>N;
    if(N>=0 && N<=1000){
    for(int i=0;i<N;i++){
        cin>>elem;
        head=insertCircular(head,elem);
    }
    deleteFirstNode(head);
    printNode(head);
    }
}
