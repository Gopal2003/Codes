#include<iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
};
Node *start=NULL;

void insert_beg(int val)
{
    Node *nd=new Node;
    nd->data=val;
    nd->next=start;
    start=nd;

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
    int N;
    cin>>N;
    int elem=0;
    while(N--)
    {
        cin>>elem;
        insert_beg(elem);
    }
    traverse();
    return 0;
}