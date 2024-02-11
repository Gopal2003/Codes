#include<bits/stdc++.h>
using namespace std;

struct Node{
   int key;
   struct Node *left;
   struct Node *right;
     Node(int k){
        key=k;
        left=right=NULL;
     }
};
bool search(Node *root,int x){
    while(root!=NULL){
        if(root->key==x){
            return true;
        }
        else if(root->key<x){
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
        return false;
}

int main(){
    Node *root=new Node(25);
    root->left=new Node(10);
    root->right=new Node(30);
    root->left->right=new Node(15);
    root->right->left=new Node(35);
    root->right->right=new Node(40);
    int x;
    cin>>x;
    if(search(root,x)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}