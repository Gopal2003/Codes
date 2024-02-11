#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}

Node *delNode(Node *root, int x)
{
    if (root == NULL)
        return root;
    if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = delNode(root->right, succ->key);
        }
    }
    return root;
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
    int main()
    {
        // Node *root = new Node(15);
        // root->left = new Node(10);
        // root->right = new Node(20);
        // root->left->left = new Node(9);
        // root->left->right = new Node(13);
        // root->right->left = new Node(16);
        // root->right->right = new Node(40);
        // root->left->right->left = new Node(12);
        // root->left->right->right = new Node(14);
        // root->right->right->left = new Node(39);
        // root->right->right->right = new Node(41);
        // int x = 40;
        Node *root=new Node(18);
        root->left=new Node(13);
        root->right=new Node(20);
        root->left->left=new Node(10);
        root->left->right=new Node(14);
        root->right->left=new Node(19);
        root->right->right=new Node(21);
        root->left->left->left=new Node(9);
        int x=16;
        root = delNode(root, x);
        inorder(root);
    }