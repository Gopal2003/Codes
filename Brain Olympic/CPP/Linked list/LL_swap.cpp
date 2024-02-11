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


void insert_end(Node *head,int x)
{
    if(head==NULL)
    {
        return temp;
    }

}

void traverse()
{
    Node *ptr = start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    Node *head=NULL;
    int N;
    cin>>N;
    int elem=0;
    while(N--)
    {
        cin>>elem;
        head=insert_beg(elem);
    }
    traverse();
    return 0;
}