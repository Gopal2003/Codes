#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int N,elem,count=0;
    cin>>N;
    if(N>2 && N<=15){
        for(int i=0;i<N;i++){
            cin>>elem;
            if(elem%2==0){
                q.push(elem);
                count++;
            }
        }
        if(count==0){
            cout<<"No even element is there";
            return 0;
        }
        while(q.empty()==false){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    else{
        cout<<"Invalid Queue range";
    }
}