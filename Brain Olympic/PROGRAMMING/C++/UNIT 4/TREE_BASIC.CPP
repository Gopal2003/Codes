#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int key;
    struct Node *left;
    struct Node *right;

    Node(int x){
        key=x;
        left=right=NULL;
    }
};

// void printNode(Node *root){
//     int count=0;
//         Node *curr=root;
//         while(curr!=NULL){
//             cout<<curr->key<<" ";
//             count++;
//             if(count!=2){
//             curr=curr->left;
//             }
//             else{
//             curr=curr->right;
//             }
//             // if(count==2){
//             // }
 
//         }   
// }

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    // printNode(root);
}