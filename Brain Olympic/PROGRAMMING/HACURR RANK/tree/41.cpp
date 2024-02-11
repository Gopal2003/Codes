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


int main(){
    Node *root=NULL;
    int n,elem;
    cin>>n;
    if(n>2 && n<=10){
        int arr[n];
          for(int i=0;i<n;i++){
            cin>>elem;
            arr[i]=elem;
            root=insert(root,elem);
          }
          for(int i=1;i<n;i++){
            int curr=arr[i];
            int j=i-1;
            while(arr[j]>curr && j>=0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=curr;
            
          }
          cout<<arr[1];
    }
    else{
        cout<<"Invalid Size";
    }
}