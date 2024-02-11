#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
     queue<int> q;
     int n,opr,n1,elem;
     cin>>n;
     if(n>0 && n<50){
        cin>>n1;
        if(n1>0 && n1<10){
            for(int i=0;i<n;i++){
                cin>>elem;
                q.push(elem);
            }
            for(int i=0;i<n1;i++){
                int elem1=0;
                   cin>>opr;
                   if(opr==1){
                    elem1=q.front();
                    q.pop();
                    q.push(elem1);
                   }
                   if(opr==0){
                    q.pop();
                   }
            }
            while(q.empty()==false){
                cout<<q.front()<<" ";
                   q.pop();
            }
        }
    }
} 