#include <iostream>
using namespace std;
#define MAX 5

class MyQueue
{
int q[MAX];
int front, rear;
public:
MyQueue()
{
front=-1;
rear=-1;
}
bool isEmpty();
bool isFull();
void enQueue(int);
void deQueue();
void peek();
void display();

};
void MyQueue::display()
{
if(front==-1 && rear==-1)
cout<<"Q is underflow"<<endl;
else
{
for(int i=front;i<=rear;i++)
cout<<q[i]<<endl;
}
}
void MyQueue::peek()
{
if(front==-1 && rear==-1)
cout<<"Q is underflow"<<endl;
else
cout<<"Front of q:"<<q[front]<<endl;
}

void MyQueue::deQueue()
{
if(front==-1 && rear==-1)
cout<<"Queue is underflow"<<endl;
else if(front==rear)
{
cout<<q[front]<<endl;
front=-1;
rear=-1;
}
else
{
cout<<q[front]<<endl;
front++;
}
}
void MyQueue::enQueue(int data)
{
//MyQueue t;
if(rear==MAX-1) // if(!isFull())
cout<<"Queue is Overflow"<<endl;
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
q[rear]=data;
}
else
{
rear++;
q[rear]=data;

//q[++rear]=data;
}
}
bool MyQueue ::isEmpty()
{
if(front==rear )
return true;
else
return false;
}

bool MyQueue::isFull()
{
if (rear==MAX-1)
return true;
else
return false;
}


int main()
{
MyQueue mq;
cout<<mq.isEmpty()<<endl;
cout<<mq.isFull()<<endl;
mq.enQueue(7);
mq.enQueue(10);
mq.enQueue(15);
mq.deQueue();
mq.peek();
mq.deQueue();
mq.deQueue();
mq.deQueue();
mq.enQueue(30);
mq.enQueue(40);
mq.enQueue(50);
mq.enQueue(60);
cout<<"After insertion 6 data"<<endl;
cout<<mq.isEmpty()<<endl;
cout<<mq.isFull()<<endl;
cout<<"My Queue element :"<<endl;
mq.display();

return 0;
}