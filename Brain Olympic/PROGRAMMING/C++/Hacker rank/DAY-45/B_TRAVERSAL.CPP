#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// A Tree node
struct Node {
	int key;
	struct Node *left, *right;
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


int height(struct Node* root)
{

	int depth = 0;

	queue<Node*> q;

	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if (temp == NULL) {
			depth++;
		}
		if (temp != NULL) {
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}

		else if (!q.empty()) {
			q.push(NULL);
		}
	}
	return (depth-1);
}

// Driver program
int main()
{
   Node *root=NULL;
   int elem,elem1;
   for(int i=0;i<10;i++){
    cin>>elem;
    root=insert(root,elem);
   }
   cin>>elem1;
   root=insert(root,elem1);



	cout  << height(root);
}
