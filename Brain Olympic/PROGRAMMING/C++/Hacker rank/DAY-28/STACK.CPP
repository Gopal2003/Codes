#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

struct MyStack{
    int cap;
    int top;
    int *arr;
    MyStack(int c){
        cap=c;
        arr=new int[MAX];
        top=-1;
    }

    void push(int data){
        if(top==cap-1){
            cout<<"Stack is full";
            return;
        }
        top++;
        arr[top]=data;

    }
    void displayStack(){
        if(top==-1){
            cout<<"Stack is empty";
            return;
        }
        for(int i=0;i<=top;i++){
              cout<<arr[i]<<" ";
        }
    }
};

int main(){
     MyStack s(MAX);
     int elem;
     for()
}