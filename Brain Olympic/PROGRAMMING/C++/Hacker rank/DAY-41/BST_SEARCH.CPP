#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  struct Node*left;
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
void inorder(Node *root,int size){
    int arr6[size],i=0;
    if(root!=NULL){
        inorder(root->left,size);
        arr6[i]=root->key;
        i++;
        inorder(root->right,size);

    }
}

void preorder(Node *root,int size){
    int arr7[size],i=0;
    if(root!=NULL){
        arr7[i]=root->key;
        i++;
        preorder(root->left,size);
        preorder(root->right,size);
    }
}

void postorder(Node *root,int size){
    int arr8[size],i=0;
    if(root!=NULL){
        postorder(root->left,size);
        postorder(root->right,size);
        arr8[i]=root->key;
        i++;
    }
}
int main(){
    Node *root=NULL;
    int n,elem,elem2,elem3;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    if(n>=3 && n<=10){
       for(int i=0;i<n;i++){
        cin>>elem;
        arr1[i]=elem;
        root=insert(root,elem);
       }
       preorder(root,n);
       for(int i=0;i<n;i++){
        cin>>elem2;
        arr2[i]=elem2;
        root=insert(root,elem2);
       }
       inorder(root,n);
       for(int i=0;i<n;i++){
        cin>>elem3;
        arr3[i]=elem3;
        root=insert(root,elem3);
       }
       postorder(root,n);
    }
}

