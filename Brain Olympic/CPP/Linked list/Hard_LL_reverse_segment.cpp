#include<iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *insert_end(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }
    else
    {
        Node *curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = NULL;
        return head;
    }
}

Node *reverse_segment(Node *head,int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt_ptr = curr->next;
    Node *f = curr;
    Node *l = NULL;
    while(curr != NULL && k<0)
    {
        k--;
        curr->next = prev;
        prev = curr;
        curr = nxt_ptr;
        nxt_ptr = curr->next;
    }
    Node *prev = NULL;
    if(l == NULL)
    {
        l = f;
    }
    else
    {
        l->next = prev;
        l = f;   
    }
}

void printList(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    int N,elem=0;
    cin>>N;
    while(N--)
    {
        cin>>elem;
        head = insert_end(head,elem);
    }
    printList(head);
}