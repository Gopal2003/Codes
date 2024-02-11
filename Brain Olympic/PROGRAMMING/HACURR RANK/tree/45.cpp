#include<bits/stdc++.h>
using namespace std;

struct Node {
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

int distance(Node *root,int data){
     int count=0;
        if(root->key<data){
        root->right=insert(root->right,data);
    }
    else if(root->key>data){
        count++;
        if(root->key==data){
            return count;
        }
        else{
        root->left=insert(root->left,data);
        }
    }
    return count;
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key;
        inorder(root->right);
    }
}

int main(){
    Node *root=NULL;
    int n,elem,n1,n2;
    cin>>n;
    if(n>=5 && n<20){
        for(int i=0;i<n;i++){
            cin>>elem;
            root=insert(root,elem);
        }
       cin>>n1;
       cin>>n2;
       cout<<distance(root,n1);
        // inorder(root);

    }

}
