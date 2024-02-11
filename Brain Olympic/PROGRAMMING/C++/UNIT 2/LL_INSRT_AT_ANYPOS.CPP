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

  Node *insertAnyPos(Node *head,int pos,int elem){
          Node *temp=new Node(elem);
          if(pos==1){
            temp->next=head;
            return temp;
          }
          Node *curr=head;

          for(int i=0;i<pos-2 && curr!=NULL;i++){
            curr=curr->next;
          }
          if(curr==NULL){
            return head;
          }
          temp->next=curr->next;
          curr->next=temp;
          return head;
  } 

void printList(Node *head){
    Node *curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=NULL);
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    // head->next->next->next->next->next=NULL;
    head=insertAnyPos(head,6,6);
    printList(head);
}