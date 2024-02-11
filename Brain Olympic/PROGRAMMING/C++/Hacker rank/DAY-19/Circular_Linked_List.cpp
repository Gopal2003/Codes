#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next=NULL;
    }
};

void printList(Node *head)
{
    if(head==NULL) return;
    Node *p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p!=head);
    cout<<endl;
}

Node *insertEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        Node *curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

Node *insert_k(Node *head,int pos,int elem)
{
    Node *temp=new Node(elem);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=0;i<pos-1 && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main()
{
    Node *head=NULL;
    int N,Z,E,x;
    cin>>N;
    cin>>Z;
    if(N>0 && N<50 && Z>0 && Z<100)
    {
        cin>>E;
        if(N<=E)
        {
            for(int i=0;i<E;i++)
            {
                cin>>x;
                head=insertEnd(head,x);
            }
            insert_k(head,N,Z);
            printList(head);
        }
    }
	return 0;
}