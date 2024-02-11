#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    struct Node*left;
    struct Node*right;
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

void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
  Node *root=NULL;
  int n,elem;
  cin>>n;
  if(n>0 && n<20){
    for(int i=0;i<n;i++){
        cin>>elem;
        root=insert(root,elem);
    }
    postorder(root);
  }
}