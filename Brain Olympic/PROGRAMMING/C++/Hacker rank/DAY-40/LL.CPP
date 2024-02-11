#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
    Node(char d)
    {
        data = d;
        next = NULL;
    }
};

Node *insertAtEnd(Node *head, char value)
{
    Node *temp = new Node(value);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *insertAtBegin(Node *head,char value){
    Node *temp=new Node(value);
    Node *curr3=head;
    temp->next=curr3;
    return temp;
}


// Node *insertBetweenVowel(Node *head, char value, int count)
// {
//     Node *temp = new Node(value);
//     Node *curr2 = head;
//     for (int j = 0; j < count - 1; j++)
//     {
//         curr2 = curr2->next;
//     }
//     curr2->next = temp;
//     temp->next = curr2->next;
//     return head;
// }
bool isVowel(char x)
{
    return (x == 'A' || x == 'E' || x == 'E' ||
            x == 'O' || x == 'U');
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    int N, count = 0, count1 = 0;
    char elem, insertElem;
    cin >> N;
    char arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> elem;
        if (elem >= 65 && elem <= 90)
        {
            arr[i] = elem;
            head = insertAtEnd(head, elem);
        }
    }
    cin >> insertElem;
    Node *curr = head;
    for (int i = 0; i < N; i++)
    {
        if (curr->next != NULL && isVowel(curr->next->data))
        {
            count++;
            curr = curr->next;
        }
        else
        {
            if (count == 1)
            {
                head=insertAtBegin(head,insertElem);
                break;
            }
            // if (count == 2)
            // {
            //     head = insertBetweenVowel(head, insertElem, 2);
            //     break;
            // }
            curr = curr->next;
        }
    }
    printList(head);
}