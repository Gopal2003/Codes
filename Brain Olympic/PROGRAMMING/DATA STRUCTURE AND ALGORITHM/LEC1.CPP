#include <iostream>
using namespace std;
struct Node{
    Node *next;
    int data;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insertAtBegin(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    temp->next=curr;
    return temp;

}

void printNode(Node* head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
  Node *head=NULL;
  int elem;
  cout<<"Enter 5 number"<<endl;
  for(int i=0;i<5;i++){
    cin>>elem;
    head=insertAtBegin(head,elem);
  }
  printNode(head);

    
}
