#include<iostream>
using namespace std;

#define SIZE 5
class MyStack
{
     int top;
   public: 
      int s[SIZE];
   
     MyStack()
     {
         top=-1;
     }
   void push(int x);
   int pop();
   bool isEmpty();
   bool isFull();
   int peek();
};

int MyStack::peek()
{
    if(top<0)
    {
       cout<<"stack is empty"<<endl;
       return 0;
    }
    else
    {
      return s[top];
   }
}  
void MyStack::push(int t)
{
    if(top<SIZE -1)
      {
          top++;
          s[top]=t;
      }
      else
       cout<<"Stack is overflow"<<endl;
}

int MyStack ::pop()
{
    if(top<0)  
       {
           cout<<"Stack is empty"<<endl;
           return 0;
       }
    else
    {
        int temp=s[top];
        top--;
        return temp;
    }
}
bool MyStack::isEmpty()
{
    if(top<0)
     return  true;
      else
      return false;
      
      
}

bool MyStack::isFull()
{
    if(top==SIZE -1)
      return true;
    else
      return false;
}

int main()
{
    MyStack ss;
    cout<<ss.isEmpty()<<endl;  // 1
    cout<<ss.isFull()<<endl;   // 0
    ss.push(5);
    ss.push(7);
    cout<<ss.isEmpty()<<endl;   // 0
    cout<<ss.peek();    // 7
    cout<<ss.pop();
    
    return 0;
}