#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    int n1,n2,elem,count=0,count1=0;
    queue <int> q;
    while(n1!=2){
        cin>>n1;
        if(n1==1){
            cin>>elem;
            q.push(elem);
            count1++;
        }
       if(n1==3){
        while(q.empty()==false){
            count++;
            cout<<q.front();
            return 0;
        }
        if(count==count1){
            return 0;
        }
    }
    }
    if(n1==2){
        q.pop();
        // while(q.empty()==false){
        //     cout<<q.front();
        //     return 0;
        // }
    }
}