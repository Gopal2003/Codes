// Insertion and deletion must be performed at the end.
#include<bits/stdc++.h>
using namespace std;
#define MAX 100

class Stack{
    int top;
    public:
    int arr[MAX];
    Stack(){
        top=-1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};

bool Stack::push(int x){
    if(top>=(MAX-1)){
        cout<<"Stack is overflow"<<endl;
        return false;
    }

    else{
        arr[++top]=x;
        cout<<x<<" is inserted in stack!!"<<endl;
        return true;
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else{
        int x=arr[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
    }
    else{
        return arr[top];
    }
        return arr[top];
}

bool Stack:: isEmpty(){
    return (top==-1);
}

int main(){
   class Stack s;
   s.push(10);
   s.push(20);
   s.push(30);
  cout<< s.pop()<<" "<<endl;
//    cout<<s.pop()<<endl;
   while(!s.isEmpty()){
    cout<<s.peek()<<" ";
    s.pop();
   }  

   return 0;  
}