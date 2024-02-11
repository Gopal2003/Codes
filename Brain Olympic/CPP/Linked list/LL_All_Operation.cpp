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
        cout << "\nLinked List is EMPTY";
    else
    {
        cout << "\nDeleted Element is: " << start->data;
        start = start->link;
    }
}

void insert_end(int val)
{
    node *nd = new node; // creating a node
    nd->data = val;

    if (start == NULL)
    {
        nd->link = start;
        start = nd;
    }
    else
    {
        node *p = start;
        while (p->link != NULL)
            p = p->link;
        // P will stop at the last node

        nd->link = NULL;
        p->link = nd;
    }
}

void delete_end()
{
    if (start == NULL)
        cout << "\nLinked List is EMPTY";
    else
    {
        node *pre = NULL, *ptr = start;
        while (ptr->link != NULL)
        {
            pre = ptr;
            ptr = ptr->link;
        }

        if (pre == NULL) // There is only one node in the List
        {
            start = NULL;
        }
        else
        {
            pre->link = NULL;
            cout << "\nDeleted Element is " << ptr->data;
            delete (ptr);
        }
    }
}

void reverse_LL()
{
    node *pre = NULL, *ptr = start, *next = NULL;
    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link = pre;
        pre = ptr;
        ptr = next;
    }
    start = pre;
}
void traverse()
{
    node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << "----->";
        ptr = ptr->link;
    }
    cout << "\n";
}

int main()
{
    int choice, item;
    do
    {
        cout << "\n1. Insert in the Beginning" << endl;
        cout << "\n2. Insert at the End" << endl;
        cout << "\n3. Delete from the Beginning" << endl;
        cout << "\n4. Delete from the End" << endl;
        cout << "\n5. Reverse the Linked List" << endl;
        cout << "\n9. Display" << endl;
        cout << "\n0. EXIT" << endl;
        cout << "\n\nEnter your choice:\t";
        cin >> choice;

        switch (choice)
        {
        case 9:
            traverse();
            break;
        case 3:
            delete_beg();
            break;
        case 4:
            delete_end();
            break;
        default:
            break;
        case 2:
            cout << "\nEnter the element to be inserted: \t";
            cin >> item;
            insert_end(item);
            break;
        case 1:
            cout << "\nEnter the element to be inserted: \t";
            cin >> item;
            break;
        case 5:
            reverse_LL();
            break;
            insert_beg(item);
        }
    } while (choice != 0);

    return 0;
}