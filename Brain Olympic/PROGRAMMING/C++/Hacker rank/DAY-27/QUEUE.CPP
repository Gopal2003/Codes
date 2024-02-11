#include<bits/stdc++.h>
using namespace std;
struct Queue{
     int front,rear,capacity;
     int *queue;
     Queue(int c){
        capacity=c;
        queue=new int;
        front=rear=0;
     }

      void queueEnqueue(int data){
        if(rear==capacity){
            cout<<"Queue is full";
            return;
        }
        else{
            queue[rear]=data;
            rear++;
        }
        return;
      }

     int queueDequeue(){
        int frontValue=0;
        if(front==rear){
            cout<<"Queue is empty";
            return 0;
        }
        else{
             frontValue=queue[front];
            for(int i=0;i<rear-1;i++){
                queue[i]=queue[i+1];
            }
            rear--;
        }
        return frontValue;

     }

     void displayQueue(){
        if(front==rear){
            cout<<"Queue is empty";
            return;
        }
        for(int i=0;i<rear;i++){
            cout<<queue[i]<<" ";
        }

     }

};


int main(){
    int n,elem,binary;
    cin>>n;
    Queue q(n);
    Queue j(n);
    for(int i=0;i<n;i++){
        cin>>binary;
        if(binary==1){
            cin>>elem;
            q.queueEnqueue(elem);
        }
        else{
            int h=q.queueDequeue();
            j.queueEnqueue(h);
        }
    }
    j.displayQueue();
    
}