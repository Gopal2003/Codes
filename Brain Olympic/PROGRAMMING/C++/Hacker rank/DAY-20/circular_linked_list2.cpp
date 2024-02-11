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

Node *deleteKth(Node *head, int k)
{
    if (head == NULL)
        return head;
    Node *curr = head;
    for (int i = 1; i < k - 1; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int checkFiBo(int x){
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
    int N, X, a;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X;
        head = insertEnd(head, X);
    }
    for(int i=0;i<N;){
        Node *curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
     int data1=curr->data;
         
       a =checkFiBo(data1);
       if(a==1){
          head=deleteKth(head,curr->data);
          printList(head);
          N--;
       }
    }
    
    
    
    return 0;
}