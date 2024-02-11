

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void printlist(Node *head)
{
    if (head == NULL)
        return;
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
        return head;
    }
}

Node *swapp(Node *head)
{
    Node *curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr;
    curr=temp;
    return temp;
}
int main()
{
    Node *head = NULL;
    int N;
    int elem;
    cin>>N;
    while(N--)
    {
        cin>>elem;
        head = insertEnd(head, elem);
    }
    printlist(head);
    return 0;
}
