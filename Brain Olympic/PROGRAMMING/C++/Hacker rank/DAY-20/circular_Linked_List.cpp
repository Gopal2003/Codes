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

void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout<<endl;
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
Node *deleteHead(Node *head)
{
    Node *curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=head->next;
    return (curr->next);
}

Node *deleteKth(Node *head,int k)
{
    if(head==NULL) return head;
    if(k==1) return deleteHead(head);
    Node *curr=head;
    for(int i=0;i<k-2;i++)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

int checkFibo(int x){
            int a,b,c;
            int d=0;
            a = 0;
            b = 1;
            c = a + b;
            if (x == 0 || x == 1) return 1;
            while (c < x)
            {
                a = b;
                b = c;
                c = a + b;
            }
            if (c == x)
            {
                d=1;
                return d;
            }
            return d;
}


int main()
{
    Node *head = NULL;
    int N, X;
    cin >> N;
    if(N==5)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> X;
            head = insertEnd(head, X);
        }
        int z=checkFibo(head->next->next->next->next->data);
        if(z==1)
        {
            head=deleteKth(head,5);
            printList(head);
        }
        z=checkFibo(head->next->next->next->data);
        if(z==1)
        {
            head=deleteKth(head,4);
            printList(head);
        }
        z=checkFibo(head->next->next->data);
        if(z==1)
        {
            head=deleteKth(head,3);
            printList(head);
        }
        z=checkFibo(head->next->data);
        if(z==1)
        {
            head=deleteKth(head,2);
            printList(head);
        }
        z=checkFibo(head->data);
        if(z==1)
        {
            head=deleteKth(head,1);
            printList(head);
        }
    }
    return 0;
}