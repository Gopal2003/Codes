#include<iostream>
using namespace std;

struct Node
{
    Node* next;
    int data;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};


Node * insertAtEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        temp->next=NULL;
        curr->next=temp;
        return head;
    }
}

Node * reverse_List(Node *head)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        Node *next_ptr;
        Node *curr=head;
        Node *prev=NULL;
        while(curr!=NULL)
        {
            next_ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next_ptr;
        }
        head=prev;
        return head;
    }
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=NULL;
    int N;
    cin>>N;
    int elem=0;
    for(int i=0;i<N;i++)
    {
        cin>>elem;
        head=insertAtEnd(head,elem);
    }
    cout<<"Before reversing: "<<endl;
    printList(head);
    cout<<"\nAfter reversing: "<<endl;
    head= reverse_List(head);
    printList(head);

}