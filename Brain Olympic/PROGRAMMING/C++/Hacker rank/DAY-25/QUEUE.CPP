#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int front,rear,capacity;
    int *queue;
    Queue(int c){
        front=rear=0;
        capacity=c;
        queue=new int;
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

    void displayQueue(){
        int count=0;
        if(front==rear){
            cout<<"Queue is Empty";
            return;
        }
        for(int i=0;i<rear;i++){
            if(queue[i]%2==0){
                count++;
            cout<<queue[i]<<" ";
            }
        }
        if(count==0){
           cout<<"No even element is there";
        }
        return;
    }
};

int main(){
    int N,elem;
    cin>>N;
    if(N>2 && N<=15){
    Queue q(N);
    for(int i=0;i<N;i++){
        cin>>elem;
       q.queueEnqueue(elem);
     }
     q.displayQueue();
   }

    else{
        cout<<"Invalid Queue range";
    }
}