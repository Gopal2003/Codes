#include<iostream>
using namespace std;

struct Node
{
    int roll_number;
    char grade;
    Node *next;
    Node(int x,char y)
    {
        roll_number = x;
        grade = y;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x,char y)
{
    Node *temp=new Node(x,y);
    temp->next=head;
    return temp;
}

char searchList(Node *head,int x)
{
    int pos=1;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->roll_number==x)
        {
            return curr->grade;
        }
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return 'G';
}

int main()
{
    Node *head=NULL;
    int n,x,rol;
    char y,gradee;
    cin>>n;
    if(n>=0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            cin>>y;
            head=insertBegin(head,x,y);
        }
        cin>>rol;
        gradee=searchList(head,rol);
        if(gradee=='G')
        {
            cout<<"You have not appeared for the Contest-1";
        }
        else
        {
            cout<<"You have secured "<<gradee<<" grade";
        }
    }
    return 0;
}