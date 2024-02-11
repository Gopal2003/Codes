// This is not the answer....
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
void printNode(Node *head){
     Node *curr=head;
     while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
     }
}

int main(){
    Node *head=NULL;
    stack<int> s;
    int t,n,elem,i;
    cin>>t;
    if(t>=1 && t<=10){
        for( i=0;i<t;i++){
            cout<<endl;
            cin>>n;
            if(n>=1 && n<=1000){
                for(int j=0;j<n;j++){
                cin>>elem;
                s.push(elem);
                }
                for(int k=0;k<n;k++){
                    elem=s.top();
                    s.pop();
                head=insertAtEnd(head,elem);
                }
                cout<<endl;
                printNode(head);
            }
        }
    }
}