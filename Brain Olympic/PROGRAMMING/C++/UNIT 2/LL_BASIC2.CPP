#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
         data=x;
        next=NULL;
    }

};


Node *insertBegin(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

void printlist(Node *head)
{
    Node *curr=head;
    curr=curr->next;
    while(curr!=NULL && curr->next!=NULL)
    {
        cout<<curr->data<< " ";
        curr=curr->next->next;
    }
}
int main(){
    Node *head=NULL;
    int elem;
    for(int i=0;i<5;i++)
    {
        cin>>elem;
        head=insertBegin(head,elem);
    }
    printlist(head);
    
    return 0;
}