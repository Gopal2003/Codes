


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insert(Node *head,int value){
    Node *temp=new Node(value);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

int search(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 


int main(){
    Node *head=NULL;
    Node *head1=NULL;
    int elem,elem1;
    for(int i=0;i<7;i++){
         cin>>elem;
        head=insert(head,elem);
    }

    for(int i=0;i<7;i++){
         cin>>elem1;
        head1=insert(head1,elem1);
    }
       printPostOrder(head,head1,7);

}