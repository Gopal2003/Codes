#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
struct myStack{
    int *arr;
    int cap;
    int top;

    myStack(int c){
        cap=c;
        arr=new int [MAX];
        top=-1;
    }
    void push(int elem){
        if(top==cap-1){
            cout<<"Stack is full!"<<endl;
            return;
        }
        top++;
        arr[top] = elem;
    }

    int pop(){
         if(top==-1){
            cout<<"Stack is empty"<<endl;
            return INT_MAX;
         }
         int topElem=arr[top];
         top--;
         return topElem;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return INT_MAX;
        }
        return arr[top];
    }

    int size(){
        return (top+1);
    }

    bool isEmpty(){
         return top==-1;
    }
};


int main(){
    myStack s(MAX);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}