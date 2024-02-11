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


Node *insert_begin(Node *head,int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}


Node *insert_end(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head == NULL)
    {
        return temp;
    }
    else
    {
        Node* curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        temp->next=NULL;
        curr->next=temp;
        return head;
    }

}


bool checkDuplicate(Node *head,int x)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data == x)
        {
            return false;
        }
        curr=curr->next;
    }
    return true;
}


Node *even_insert(Node *head,int x)
{
    Node *temp=new Node(x);
    Node *curr=head;
    Node *prev=head;
    while(curr != NULL)
    {
        if(curr->data %2== 0)
        {
            if(x > curr->data && (prev->data)%2 != 0)
            {
                temp->next=curr;
                prev->next=temp;
                return head;
            }
            else if(curr->data > x && curr->next != NULL && curr->next->data<x )
            {
                temp->next=curr->next;
                curr->next=temp;
                return head;
            }
            else if(curr->data > x && curr->next == NULL)
            {
                curr->next=temp;
                temp->next=NULL;
                return head;
            }
            else if(curr->next == NULL && curr->data < x)
            {
               temp->next = head;
               return temp;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        else if((curr->data) %2 !=0 && curr->next == NULL)
        {
                curr->next = temp;
                temp->next = NULL;
                return head;
        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
        
    }
    return NULL;
}


Node *odd_insert(Node *head,int x)
{
    Node *temp = new Node(x);
    Node *curr = head;
    while((curr->data) %2 != 0)
    {
        if(curr->next == NULL && curr->data < x)
        {
            curr->next = temp;
            temp->next = NULL;
            return head;
        }
        else if(curr->data>x)
        {
            head=insert_begin(head,x);
            return head;
        }
        else if(curr->data<x && curr->next->data>x && (curr->next->data) %2 != 0)
        {
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
        else if(curr->data<x && (curr->next->data) %2 == 0)
        {
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
        else
        {
            curr = curr->next;
        }
    }
    if(curr->data %2 ==0)
    {
        temp->next = curr;
        return temp;
    }
    return NULL;
}

Node *insert(Node *head,int x)
{
    bool chk_Dup=checkDuplicate(head,x);
    if(!chk_Dup)
    {
        cout<<"Duplicates are not allowed";
        return NULL;
    }
    else
    {
        if(x%2 == 0)
        {
            head=even_insert(head,x);
        }
        else
        {
            head=odd_insert(head,x);
        }
    }
    return head;
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
        while(N--)
        {
            cin>>elem;
            head=insert_end(head,elem);
        }  
        cin>>elem_insert;
        head = insert(head,elem_insert);
        if(head != NULL)
        {
            printList(head);
        }

    }
    return 0;
}