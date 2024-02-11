//link-->https://www.hackerrank.com/contests/dsa-24th-june/challenges
#include<iostream>
using namespace std;
struct Node
{
    Node *next;
    int data;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

Node* insert_end(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        return temp;
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

Node *insert(Node *head,int x,int N)
{
    Node* temp=new Node(x);
    Node* curr=head;
    Node *prev=curr;
    for(int i=0;i<N;i++)
    {
        if(curr->data==x && curr!=NULL)
        {
            cout<<"Duplicates are not allowed";
            return NULL;
        }
        curr=curr->next;
    }
    curr=head;
    if(x%2==0)
    {
        // cout<<"\nEven"<<endl;
        // cout<<"\n "<<curr->data<<endl;
        while(curr!=NULL && prev !=NULL)
        {
            int elem=curr->data;
            // cout<<"elem"<<elem<<endl;
            if(elem%2==0)
            {
                if(curr->data>x && curr->next==NULL)
                {
                    // cout<<"Entered"<<endl;
                    curr->next=temp;
                    temp->next=NULL;
                    return head;
                }
                 else if(curr->data>x && curr->next->data<x)
                {
                    temp->next=curr->next;
                    curr->next=temp;
                    return head;
                }
                else if(curr->data<x)
                {
                    temp->next=curr;
                    prev->next=temp;
                    return head;
                }
                else
                {
                    curr=curr->next;
                }
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
            // curr=curr->next;
            // prev=prev->next;
    }
    else
    {
        while((curr->data)%2!=0)
        {
            if(curr->data<x && curr->next->data>x)
                {
                    temp->next=curr->next;
                    curr->next=temp;
                    return head;
                }
                else if(curr->data>x)
                {
                    temp->next=curr;
                    return temp;
                }
                else if(curr->data<x && (curr->next->data)%2==0)
                {
                    temp->next=curr->next;
                    curr->next=temp;
                    return head;
                }
                else
                {
                    curr=curr->next;
                }
        }
                
    }
    return NULL;
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
    int N,elem,elem_insert;
    cin>>N;
    if(N>0 && N<10)
    {
        for(int i=0;i<N;i++)
        {
            cin>>elem;
            head=insert_end(head,elem);
        }
    }
    cin>>elem_insert;
    // printList(head);
    head=insert(head,elem_insert,N);
    if(head!=NULL)
    {
        printList(head);
    }
}