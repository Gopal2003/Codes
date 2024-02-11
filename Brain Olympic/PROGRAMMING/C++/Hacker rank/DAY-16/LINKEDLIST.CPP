#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int elem)
{
    Node *temp = new Node(elem);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return head;
    }
}
Node *delHead(Node *head)
{
    if (head == NULL)
    {
        cout << "Underflow" << endl;
        return NULL;
    }
    if (head->next == head)
    {
        delete head;
        cout << "CLL is Empty" << endl;
        return NULL;
    }
    
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete (head);
    return (curr->next);

    
}
void printList(Node *head)
{
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

main()
{
    Node *head = NULL;
    int i, n, x;
    cin >> n;
    if (0 <= n && n <= 100)
    {

        for (i = 0; i < n; i++)
        {
            cin >> x;
            head = insertEnd(head, x);
        }
       head=delHead(head);
       if(head!=NULL){
        printList(head);
       }
    }
    else
    {
        cout << "Invalid Number" << endl;
    }
}