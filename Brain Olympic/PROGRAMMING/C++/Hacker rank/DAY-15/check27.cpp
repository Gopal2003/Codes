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

Node *insertAtEnd(Node *head,int y){
    Node *temp=new Node(y);
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

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int smallestElement(struct Node* head)
{
    int min = INT_MAX;
    while (head != NULL) {
        if (min > head->data)
            min = head->data;
        head = head->next;
    }
    return min;
}



main(){
    int i,elem;
    int max=0;
    Node *head=NULL;
    for(i=0;i<5;i++){
        cin>>elem;
        head=insertAtEnd(head,elem);
    }
    cout<<endl;
    int smallElem=smallestElement(head);
    cout<<"minimum element is: ";
    
    cout<<smallElem;
    cout<<endl;
    printList(head);

}