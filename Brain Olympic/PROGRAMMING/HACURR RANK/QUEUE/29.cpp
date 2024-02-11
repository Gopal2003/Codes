#include<bits/stdc++.h>
using namespace std;

void print(queue<int> &q){
    while(q.empty()==false){
        cout<<q.front()<<" ";
            q.pop();
    }
}

int main(){
    int n,k,posn;
    queue<int> q;
    stack<int> s;
    cin>>n;
    if(n==5){
        for(int i=0;i<n;i++){
        cin>>k;
        q.push(k);

        }
        cin>>posn;
        for(int j=0;j<posn;j++){
            s.push(q.front());
            q.pop();
        }
        while(s.empty()==false){
            q.push(s.top());
            s.pop();
        }
        for(int k=0;k<n-posn;k++){
            q.push(q.front());
            q.pop();
        }
        print(q);
        // while(q.empty()==false){
        //     cout<<q.front()<<" ";
        //     q.pop();
        // }
        
        
    }
}