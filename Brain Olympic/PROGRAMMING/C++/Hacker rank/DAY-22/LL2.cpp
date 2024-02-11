#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node (int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node *insertAtEnd(Node *tail,int element){
    Node *temp=new Node(element);
    if(tail==NULL){
        return temp;
    }
    Node *curr=tail;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return tail;
}

// Node *insertAtBeginning(Node *tail,int data){
//     Node *temp=new Node(data);
//     if(tail==NULL){
//         return temp;
//     }
//     Node *curr=tail;
//     temp->next=curr;
//     curr->prev=temp;
//     return temp;

// }
Node *reverseNode(Node *tail){
    Node *curr=tail;
    Node *prev=NULL;
    while(curr!=NULL){
       Node *temp=curr->next;
       curr->next=prev;
       prev=curr;
       curr=temp;

    }
    return prev;
}

void printList(Node *tail){
    Node *curr=tail;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *tail=NULL;
    int N,rollNo,count=0;
    cin>>N;
    if(N>=3 && N<12){
        for(int i=0;i<N;i++){
            cin>>rollNo;
            if(rollNo%2==0){
            tail=insertAtEnd(tail,rollNo);
            }
            else{
                count++;
                continue;
            }
        }
        // tail=reverseNode(tail);
        if(count!=0){
        printList(tail);
        }
        else{
            cout<<"No student is having odd roll number";
        }
    }
    else{
        cout<<"Wrong Input"<<endl;
    }
    return 0;
}