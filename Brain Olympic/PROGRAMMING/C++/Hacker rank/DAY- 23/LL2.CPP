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


Node *insertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
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

Node *deleteSecond2(Node *head,int k){
    Node *curr=head;
    for(int i=0;i<k-1;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

// Node *deleteAtSecond(Node *head,int data1){
//          Node *curr=head;
//          int count1=0,position=0;
//          while(curr->next!=NULL){
//             if(data1==curr->data){
//                 count1++;
//             }
//                 position++;
//             if(count1==2){
//                 head=deleteSecond2(head,position);
//             }
//             curr=curr->next;
//          }
//          return head;
// }
Node *deleteAtSecond(Node *head,int data1,int size){
         Node *curr=head;
         int count1=0,position=0,indicator=0;
        for(int i=0;i<size;i++){
                if(curr->data==data1){
                    count1++;
                    position=i;
                }
                curr=curr->next;
                if(count1==2){
                    head=deleteSecond2(head,position);
                    indicator++;
                }
                if(indicator>=1){
                    break;
                }
        }
        return head;
}

Node *reverseList(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;

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
    int N,elem,elem1,count=0;
    cin>>N;
    if(N>2 && N<=20){
        for(int i=0;i<N;i++){
        cin>>elem;
        head=insertAtEnd(head,elem);
        }
        cout<<endl;
        cin>>elem1;
        Node *curr=head;
        for(int i=0;i<N;i++){
            if(elem1==curr->data){
                count++;
            }
            curr=curr->next;
        }
        if(count>1){
        head=deleteAtSecond(head,elem1,N);
        }
        if(count>1){
        head=reverseList(head);
        printList(head);
        }
        if(count<=1){
            cout<<"Deletion not possible";
        }
    }
    else{
        cout<<"Invalid list size";
    }
    return 0;
}