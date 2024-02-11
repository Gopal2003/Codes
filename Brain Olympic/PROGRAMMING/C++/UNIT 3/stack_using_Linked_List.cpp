// Beginning of the linked list as the top of stack..
// Coz time complexity of inserting at beginning and deleting at beginning is O(1).
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct MyStack
{
    Node *head;
    int sz;
    MyStack()
    {
        head = NULL;
        sz = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        sz++;
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "Your stack is empty" << endl;
            return INT_MAX;
        }
        int elem = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        sz--;
        return elem;
    }

    int peek(){
        if(head==NULL){
            cout<<"Can't determine the peek value as stack is empty..!"<<endl;
            return INT_MAX;
        }
        int topElem=head->data;
        return(topElem);
    }
    
    int size(){
        return sz;
    }

    bool isEmpty(){
        return (head==NULL);
    }
};

int main(){
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}
