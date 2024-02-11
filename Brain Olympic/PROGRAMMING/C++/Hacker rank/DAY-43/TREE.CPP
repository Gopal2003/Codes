// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int key;
//     struct Node *left;
//     struct Node *right;
//     Node(int k)
//     {
//         key = k;
//         left = right = NULL;
//     }
// };

// Node *insert(Node *root, int value)
// {
//     Node *temp = new Node(value);
//     if (root == NULL)
//     {
//         return temp;
//     }
//     if (root->key < value)
//     {
//         root->right = insert(root->right, value);
//     }
//     else if (root->key > value)
//     {
//         root->left = insert(root->left, value);
//     }
//     return root;
// }

// // int inorder(Node *root){
// //     if(root!=NULL){
// //         inorder(root->left);
// //         cout<<root->key<<" ";
// //         inorder(root->right);
// //     }
// // }
// bool are_identical( Node *root1,Node *root2)
// {

//     if (root1 == nullptr && root2 == nullptr)
//     {
//         return true;
//     }

//     if (root1 != nullptr && root2 != nullptr)
//     {
//         return ((root1->key == root2->key) &&
//                 are_identical(root1->left, root2->left) &&
//                 are_identical(root1->right, root2->right));
//     }

//     return false;
// }
// int main()
// {
//     Node *root = NULL;
//     Node *root2 = NULL;
//     int N, M, elem, elem2, result;
//     cin >> N;
//     if (N > 0)
//     {
//         for (int i = 0; i < N; i++)
//         {
//             cin >> elem;
//             root = insert(root, elem);
//         }
//         cin >> M;
//         if (M > 0)
//         {
//             for (int j = 0; j < M; j++)
//             {
//                 cin >> elem2;
//                 root2 = insert(root2, elem);
//             }
//             if (are_identical(root, root2))
//             {
//                 cout << " the trees are identical" << endl;
//             }
//             else
//             {
//                 cout << "the trees are not identical" << endl;
//             }
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insertAtEnd(Node *head,int value){
    Node *temp=new Node(value);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
        cout<<endl;
}

int identicalCheck(Node *head1,Node *head2,int N,int M){
    if(N==M){
        int count=0;
        Node *curr=head1;
        Node *curr2=head2;
        for(int i=0;i<N;i++){
            if(curr->data!=curr2->data){
                cout<<"Both trees are not identical";
                count++;
                return 0;
            }
            curr=curr->next;
        }
        if(count==0){
            cout<<"Both trees are identical";
        }
    }
    else{
           cout<<"Both trees are not identical";
        }
    return 0;
     
}

int main(){
    Node *head=NULL;
    Node *head1=NULL;
    int N,M,elem1,elem2;
    cin>>N;
    if(N>0){
        for(int i=0;i<N;i++){
            cin>>elem1;
            head=insertAtEnd(head,elem1);
        }
        cin>>M;
        if(M>0){
            for(int j=0;j<M;j++){
                cin>>elem2;
                head1=insertAtEnd(head1,elem2);
            }
            identicalCheck(head,head1,N,M);
        }
    }
}