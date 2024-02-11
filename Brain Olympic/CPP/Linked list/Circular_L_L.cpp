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

Node *circular_end(Node *head,int elem)
{
    Node *temp=new Node(elem);
    if(head==NULL) 
    {
        temp->next=temp;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;

}

void printlist(Node* head)
{
    Node *curr=head;
    do
    {
        cout<<curr->data;
        if(curr->next!=head)
        {
            cout<<"-->";
        }
        else
        {
            cout<<"-->"<<head->data;
        }
        curr=curr->next;
    } while (curr!=head);
    
}

int main()
{
    Node *head=NULL;
    int N,elem;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>elem;
        head=circular_end(head,elem);
    }
    printlist(head);
    return 0;
}