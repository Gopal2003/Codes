#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

node *start = NULL;

void insert_beg(int val)
{
    node *nd = new node; // creating a node
    nd->data = val;

    nd->link = start;
    start = nd;
}

void delete_beg()
{

    if (start == NULL)
        cout << "\nSorry! Linked List is Empty";
    else
    {
        cout << "\nDeleted Node: " << start->data << endl;
        start = start->link;
    }
}

void traverse()
{
    node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << "----->";
        ptr = ptr->link;
    }
}

int main()
{
    int n, v;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of node " << (i + 1) << "\t";
        cin >> v;
        insert_beg(v);
    }
    delete_beg();
    traverse();
    return 0;
}