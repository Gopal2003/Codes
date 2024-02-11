#include<bits/stdc++.h>
using namespace std;

struct Node{
       int data;
       Node *next;

       Node(int x){
            data=x;
            next=NULL;
       }
};

Node *insertAtEnd(Node *head,int y){
    Node *temp=new Node(y);
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

Node *insertAtBegin(Node *head,int z){
    Node *temp4=new Node(z);
    if(head==NULL){
        return temp4;
    }
    Node *curr=head;
    temp4->next=head;
    return temp4;

}


Node *insertAtEven(Node *head,int evNum){
    Node *temp2=new Node(evNum);
    Node *curr2=head;
        while(curr2!=NULL){
            if(curr2->data%2==0){
                if(curr2->data>evNum && curr2->next->data<evNum){
                    temp2->next=curr2->next;
                    curr2->next=temp2;
                }
            }
            curr2=curr2->next;
        }
        return head;
      
}
Node *insertAtOdd(Node *head,int odNum){
    Node *temp3=new Node(odNum);
    Node *curr3=head;
     while(curr3!=NULL){
            if(curr3->data%2!=0){
                if(curr3->data<odNum && curr3->next->data>odNum){
                    temp3->next=curr3->next;
                    curr3->next=temp3;
                }
            }
            curr3=curr3->next;
        }
    
        return head;
}

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
     Node *head=NULL;
     int N,elem,elem2,countEv=0,countOd=0;
     int countOdItr=1,countEvItr=1;
     cin>>N;
     if(N>0 && N<10){
        for(int i=0;i<N;i++){
            cin>>elem;
            if(elem %2==0){
                head=insertAtEnd(head,elem);
            }
            else{

            head=insertAtBegin(head,elem);    
            }
        }
        Node *curr=head;
        for(int i=0;i<N;i++){
            if(curr->data%2!=0){
                countOd++;
                curr=curr->next;
            }
            else{
                countEv++;
                curr=curr->next;
            }
        }
        while(curr!=NULL){
            if(elem%2!=0 && countOdItr<countOd){
                if(curr->data>curr->next->data){
                    int temp2=curr->next->data;
                    curr->next->data=curr->data;
                    curr->data=temp2;
                    if(countOdItr>1){
                        curr=head;
                        if(curr->data>curr->next->data){
                            int temp3=curr->next->data;
                            curr->next->data=curr->data;
                            curr->data=temp3;
                        }

                    }
                    countOdItr++;
                }
                curr=curr->next;
            }
        }


         while(curr!=NULL){
            if(elem%2==0 && countOdItr<countEv){
                if(curr->data<curr->next->data){
                    int temp3=curr->data;
                    curr->next->data=curr->data;
                    curr->data=temp2;
                    if(countOdItr>1){
                        curr=head;
                        if(curr->data<curr->next->data){
                            int temp3=curr->data;
                            curr->data=curr->next->data;
                            curr->next->data=temp3;
                        }

                    }
                    countOdItr++;
                }
                curr=curr->next;
            }
        }
        // cout<<endl<<"Enter the element to insert"<<endl;
        // cin>>elem2;
        // if(elem2%2==0){
        // head=insertAtEven(head,elem2);
        // }
        // else{
        //     head=insertAtOdd(head,elem2);
        // }
        printList(head);

        
     }


}