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
    void displayQueue(){
        if(front==rear){
            cout<<"Queue is Empty";
            return;
        }
        for(int i=0;i<rear;i++){
            cout<<queue[i]<<" ";
        }
    }
};

int main(){
    int N,elem,prevElem=0;
    cin>>N;
    if(N>2 && N<=10){
        Queue q(N);
        for(int i=0;i<N;i++){
        cin>>elem;
        if(elem>prevElem){
           q.queueEnqueue(elem);
           prevElem=elem;
        }
        else{
            i--;
        }
        }
        q.displayQueue();
    }
    else{
        cout<<"Invalid size";
    }
}

//OR

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> q;
    int n,x;
    cin>>n;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    if(n>2 && n<=10)
    {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(i!=0)
            {
                arr[i]=x;
                if(arr[i]>arr[i-1])
                {
                    q.push(x);
                }
                else
                {
                    cin>>x;
                    arr[i]=x;
                    if(arr[i]>arr[i-1])
                    {
                        q.push(x);
                    }
                    else
                    {
                        cin>>x;
                        arr[i]=x;
                        q.push(x);
                    }
                }
            }
            else
            {
                q.push(x);
                arr[i]=x;
            }
        }
        int siz=q.size();
        for(int i=0;i<siz;i++)
        {
            cout<<q.front()<<endl;
            q.pop();
        }
    }
    else
    {
        cout<<"Invalid size";
    }
	return 0;
}