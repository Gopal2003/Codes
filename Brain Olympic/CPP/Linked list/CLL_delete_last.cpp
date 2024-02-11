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

Node *insert_end(Node *head,int x)
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
        while(curr->next!=head);
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

/*void printList(Node *head)
{
    Node *curr=head;
    do
    {
        cout<<curr->data;
       /*if(curr->next!=head)
        {
            cout<<"--->";
        }*/
    //    curr=curr->next;
   // } while(curr!=head);
//}*/
int main()
{
    Node *head=NULL;
    int N,elem;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>elem;
        head=insert_end(head,elem);
    }
   // printList(head);
}