#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        next=NULL;
        data=d;
    }
};


Node *insertatEnd(Node *head,int x)
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
    do
    {
        curr=curr->next;
        cout<<curr->data;
        if(curr->next!=NULL)
        {
            cout<<"-->";
        }
        curr=curr->next;
    }while(curr!=NULL && curr->next!=NULL);
}

int main()
{
    Node* head=NULL;
    int N,elem;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>elem;
        head=insertatEnd(head,elem);
    }
    printlist(head);
}