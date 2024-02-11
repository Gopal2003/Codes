#include<bits/stdc++.h>
using namespace std;
struct Node{
   char data;
   Node *next;
   Node(char d){
    data=d;
    next=NULL;
   }
};

Node *insertAtEnd(Node *head,int value){
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

void printList(Node *head,int index){
    Node *curr=head;
    int i=0;
    while(curr!=NULL){
        if(i==index){
        cout<<curr->data;
        return ;
        }
        i++;
        curr=curr->next;
    }
}
int main(){
    Node *head=NULL;
    int N,i;
    char elems;
    cin>>N;
    if(N>=1 && N<=20){
        for(i=0;i<N;i++){
            cin>>elems;
            head=insertAtEnd(head,elems);
        }
        if(N%2==0){
           int evenIndex=(N/2)-1;
           printList(head,evenIndex);
        }
        else{
            int oddIndex=N/2;
           printList(head,oddIndex);
        }
    }
}