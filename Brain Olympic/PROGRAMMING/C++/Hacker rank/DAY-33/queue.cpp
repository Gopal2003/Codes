#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
     int n,elem,n1;
     queue<int> q;
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>n1;
          if(n1==1){
            cin>>elem;
            q.push(elem);
          }
          if(n1==2){
            q.pop();
          }
          if(n1==3){
            cout<<q.front()<<endl;
          }
     }
     return 0;
}