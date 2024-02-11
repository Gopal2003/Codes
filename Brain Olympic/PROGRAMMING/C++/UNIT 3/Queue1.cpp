#include<bits/stdc++.h>
using namespace std;

struct Queue{
     int front,rear,capacity;
     int *queue;
     Queue(int x){
        front=rear=0;
        capacity=x;
        queue=new int;
     }

     void queueEnqueue(int data){
        if(capacity==rear){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            queue[rear]=data;
            rear++;
        }
         return;
     }

     void queueDequeue(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            for(int i=0;i<rear-1;i++){
                queue[i]=queue[i+1];
            }
            rear--;
        }
        return ;
     }
     void displayQueue(){
          if(front==rear){
            cout<<"Queue is empty"<<endl;
            return;
          }

          for(int i=0;i<rear;i++){
            cout<<queue[i]<<" ";
          }
     }
     void queueFront(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        cout<<"Front element of the queue is "<<queue[front];
     }
     void queueRear(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        for(int i=1;i<=rear;i++){
            if(i==rear){
                cout<<endl<<"Rear element of Queue is "<<queue[i-1]<<endl;
            }
        }
     }

};

int main(){
    Queue q(4);
    q.queueEnqueue(3);
    q.queueEnqueue(4);
    q.queueEnqueue(7);
    q.queueEnqueue(6);
    cout<<endl;
    q.displayQueue();
    q.queueDequeue();
    cout<<endl;
    q.displayQueue();
    q.queueEnqueue(5);
    cout<<endl;
    // cout<<endl;
    q.displayQueue();
    cout<<endl;
    q.queueFront();
    q.queueRear();


}