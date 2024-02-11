/*WAP to accept N Numbers in to a singly link list. Delete a number by asking the position from the user.

For Example if 5 elements are there in the Linked list and the elements are 2 7 4 6 9 if the position is 3 then output will be 2 7 6 9 */

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertAtEnd(Node *head,int elem){
        Node *temp=new Node(elem);
        if(head==NULL){
            return temp;
        }
        Node *curr=head;
        while(curr->next!=NULL){
             curr=curr->next;
        }
        curr->next=temp;
        return(head);


}

Node *deletePos(Node *head,int k){
    int pos=k;
    if(pos==1){
        Node *temp=head;
        head=head->next;
        delete(temp);
        return head;

    }
    Node *curr=head;
    for(int i=0;i<k-2;i++){
         curr=curr->next;
    }
    Node *temp1=curr->next;
    curr->next=curr->next->next;
    delete(temp1);
    return head;
}

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head=NULL;
    int N,x,pos;
    cin >> N;
    for(int i=0;i<N;i++){
        cin>>x;
        head=insertAtEnd(head,x);
    }
    cout<<endl;
    cin>>pos;
    if(pos>=1 && pos<=N){
    head=deletePos(head,pos);
    printList(head);
    }
    return 0;
}

