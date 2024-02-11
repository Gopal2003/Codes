/*insert_end
    insert_end(Node *hea,int x)
    {
        Node *temp=new Node(x);
        Node *last=head;
        if(head==NULL)
        {
            temp->next=temp;
            last=temp;
            return temp;
        }
        else
        {
            Node *curr=head;
            curr->next=temp;
            temp->next=head;
            last=temp;
            return head;
        }
    }
*/

// Delete loop
// class Solution
// {
// public:
//     // Function to remove a loop in the linked list.
//     void removeLoop(Node *head)
//     {
//         // code here
//         // just remove the loop without losing any nodes
//         if (head == NULL)
//             return;

//         Node *slow = head;
//         Node *fast = head;

//         while (slow != NULL && fast != NULL)
//         {
//             fast = fast->next;
//             if (fast != NULL)
//             {
//                 fast = fast->next;
//             }
//             slow = slow->next;

//             if (slow == fast)
//                 break;
//         }

//         if (slow == fast)
//         {
//             slow = head;
//             while (slow != fast)
//             {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//         }

//         while (slow->next != fast)
//         {
//             slow = slow->next;
//         }
//         slow->next = NULL;
//     }
// };