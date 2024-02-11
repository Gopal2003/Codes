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

Node *insertAtBegin(Node *head,int y){
    Node *temp=new Node(y);
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

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

main(){
    int x,count=0,n,i;
    Node *head=NULL;
    while(x!=-1){
        cin>>x;
        head=insertAtBegin(head,x);
        if(x%2==0){
            count++;
        }
    }
    if(count==0){
        cout<<"no even number present"<<endl;
    }
    else{
        cout<<endl;
        cout<<count<<endl;
    }
    cout<<endl;
    printList(head);
}