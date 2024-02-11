#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
     queue <string> q;
     string name;
     int n1,n2,count=0,count1=0;
     while(n1!=2){
        cin>>n1;
        if(n1==1){
            cin>>n2;
            for(int i=0;i<n2;i++){
            cin>>name;
            count++;
            if(count<=9){
            q.push(name);
            }
            else{
                cout<<"No other spectator is allowed";
                count1++;
                break;
            }
            }
        }
            if(count1==1){
                break;
            }
     }
     if(count1<=0){
    for(int i=0;i<count;i++){
       if(i%2!=0){
        cout<<q.front()<<" ";
        q.pop();
       } 
       else{
         q.pop();
       }
    }   
     }
}     