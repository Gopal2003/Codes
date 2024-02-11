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
Node *secondLargest(Node *root,int Slar){
    if(root->key<Slar){
        if(root->right->key==Slar){
            cout<<"Right of "<<root->key;
            return 0;
        }
        root->right=secondLargest(root->right,Slar);
    }
    else if(root->key>Slar){
        if(root->left->key==Slar){
            cout<<"Left of "<<root->key;
            return 0;
        }
        root->left=insert(root->left,Slar);
    }
    return 0;
}

int main(){
    Node *root=NULL;
    int N,elem,max=0,Smax=0,Tmax=0;
    cin>>N;
    int arr[N];
    if(N==7){
        for(int i=0;i<N;i++){
           cin>>elem;
           arr[i]=elem;
           root=insert(root,elem);
        }
        for(int j=0;j<N;j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        for(int k=0;k<N;k++){
           if(arr[k]>Smax && arr[k]<max){
            Smax=arr[k];
           }
        }
        for(int l=0;l<N;l++){
           if(arr[l]>Tmax && arr[l]<Smax){
            Tmax=arr[l];
           }
        }
        secondLargest(root,Smax);
 
    }
}