/*Create a two-way linked list of N integer elements. Delete all the occurrences of the elements from the first occurrence till second
 last occurrence of the entered specific value. The number of elements should be greater than 2 and less than equal to 20 in the list.
  If size is not in the mention range than program should display “Invalid list size” without asking for the second input. If the number 
  to be deleted is not present or present only one time, display the message “Deletion not possible”.*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *next;
     Node *prev;

     Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
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
    temp->prev=curr;
    return head;
}

Node *deleteElem(Node *head,int z){
    int value=z;
    int count=0;
    Node *curr=head;
    while(curr!=NULL){
        if(value==curr->data){
            count++;
        }
        curr=curr->next;
    }
    if(count==0 || count<2){
        cout<<"Deletion not possible";
    }

    else{

    while(curr!=NULL){
       if(curr)
    }

    }

    
}

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}


int main(){
    int N,y,elem;
    Node *head=NULL;
    cin>>N;
    if(N>2 && N<=20){
        for(int i=0;i<N;i++){
            cin>>y;
            head=insertAtEnd(head,y);

        }
        printList(head);
        cout<<endl;
        cin>>elem;
        head=deleteElem(head,elem);
    }

    else{
        cout<<"Invalid list size";
    }

}