// queue <node*> q;
// q.push(root); //Add the Root of Tree in to the Queue

// while(!q.empty()) //the loop should run until the Queue becomes wmpty
// {
// node* temp = q.front(); //storing the front element of Queue
// cout<< temp->data;
// if(temp->left != NULL) //Left child is Present
// q.push(temp->left);
// if(temp->right != NULL) //Right Child is Present
// q.push(temp->right);

// q.pop(); //Remove the node from the Queue
// }



#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root,int x)
{
    Node *temp = new Node(x);
    if(root == NULL)
    {
        return temp;
    }
    else
    {
        Node *curr_left = root;
        Node *curr_right = root;
        while(curr_left -> left != NULL & curr_right -> right != NULL)
        {
            curr_left = curr_left -> left;
            curr_right = curr_right -> right;
        }
        if(curr_left -> left == NULL)
        {
            curr_left ->left = temp;
            temp -> left = NULL;
            temp -> right = NULL;
            return root;
        }
        else if(curr_right -> right == NULL)
        {
            curr_left ->right = temp;
            temp -> left = NULL;
            temp -> right = NULL;
            return root;

        }
    }

}
int main()
{
    Node *root = NULL;
    int N,elem = 0;
    cout << "Enter the heigt of the tree " << endl;
    cin >> N;
    cout << "Enter the elements of the tree " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> elem;
        root = insert(root,elem);
    }
    return 0;
}
