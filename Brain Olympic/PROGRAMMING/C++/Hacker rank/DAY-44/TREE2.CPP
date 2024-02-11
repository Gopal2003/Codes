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

void printGivenLevel(struct Node* root, int level, int ltr);
int height(struct Node* node);
struct Node* newNode(int data);

Node *insert(Node *root,int value){
    Node *temp= new Node (value);
    if(root==NULL){
        return NULL;
    }
    if(root->key<value){
        root->right=insert(root->right,value);
    }
    else if(root->key>value){
        root->left=insert(root->left,value);
    }
    return root;
}

void printSpiral(struct Node* root)
{
    int h = height(root);
    int i;
 
    bool ltr = false;
    for (i = 1; i <= h; i++) {
        printGivenLevel(root, i, ltr);
 
    
        ltr = !ltr;
    }
}

void printGivenLevel(struct Node* root, int level, int ltr)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->key << " ";
 
    else if (level > 1) {
        if (ltr) {
            printGivenLevel(root->left, level - 1, ltr);
            printGivenLevel(root->right, level - 1, ltr);
        }
        else {
            printGivenLevel(root->right, level - 1, ltr);
            printGivenLevel(root->left, level - 1, ltr);
        }
    }
}

int height(struct Node* node)
{
    if (node == NULL)
        return 0;
    else {
 
        
        int lheight = height(node->left);
        int rheight = height(node->right);
 
       
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

int main(){
    Node *root=NULL;
    int n,elem;
    cin>>n;
    if(n>0){
       for(int i=0;i<n;i++){
        cin>>elem;
        root=insert(root,elem);
       }
       printSpiral(root);
        
    }
}