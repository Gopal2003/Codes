// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//        string data;
//        Node *next;
//        Node(string x){
//         data=x;
//         next=NULL;
//        }
// };

// string lower_string(string str)
// {
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] = str[i] + 32;
//     }
//     return str;
// }

// Node *insertAtEnd(Node *head,string empName){
//     Node *temp=new Node(empName);
//     if(head==NULL){
//         return temp;
//     }
//     Node *curr=head;
//     while(curr->next!=NULL){
//         curr=curr->next;
//     }
//     curr->next=temp;
//     return head;
// }


// void printList(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<endl;
//         curr=curr->next;
//     }
// }


//  main(){
//     Node *head=NULL;
//         string nameOfEmp,check;
//     int N,i,count=0;
//     cout<<"Enter the number of employee"<<endl;
//     cin>>N;
//     if(N>=5 and N<30){
//         for(i=0;i<N;i++){
//             cin>>nameOfEmp;
//             head=insertAtEnd(head,nameOfEmp);
//             check=lower_string(nameOfEmp);
//             if(check=="vivek"){
//                 count++;
//             }
//         }
//         if(count>0){
//             cout<<count<<endl;

//         }
//     }
//     else{
//         cout<<"Invalid Input"<<endl;
//     }
//     cout<<endl;
//     printList(head);
//     cout<<endl;
  
// }


#include<iostream>
using namespace std;

struct Node
{
    string name;
    Node *next;
    Node(string x)
    {
        name=x;
        next=NULL;
    }
};
string lower_string(string str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return str;
}

Node *insertEnd(Node *head,string x)
{
    Node *temp=new Node(x);
    if(head==NULL) return temp;
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

int main()
{
    int N,count=0;
    string nameOfEmp,check;
    Node *head=NULL;
    cin>>N;
    if(N>=5 && N<30)
    {
        for(int i=0;i<N;i++)
        {
            cin>>nameOfEmp;
            check=lower_string(nameOfEmp);
            head=insertEnd(head,check);
            if(check=="vivek")
            {
                count++;
            }
        }
        if(count!=0)
        {
            cout<<count;
        }
    }
    else
    {
        cout<<"Invalid Input";
    }
    return 0;
}