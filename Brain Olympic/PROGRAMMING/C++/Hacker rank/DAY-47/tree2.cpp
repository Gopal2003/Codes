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

Node *insert(Node *root,int value){
    Node *temp=new Node(value);
    if(root==NULL){
        return temp;
    }
    if(root->key<value){
        root->right=insert(root->right,value);
    }
    else if(root->key>value){
        root->left=insert(root->left,value);
    }
    return root;
}

Node *EdgeCount(Node *root,int value,int count){

    while(root->left!=NULL){
        count++;
        root=root->left;
    }

    while(root->right!=NULL)
    return root;
}

int main(){
    Node *root=NULL;
    int elem,count=0;
    for(int i=0;i<10;i++){
        cin>>elem;
        root=insert(root,elem);
    }
    int rootKey=root->key;
    EdgeCount(root,rootKey,0);

}