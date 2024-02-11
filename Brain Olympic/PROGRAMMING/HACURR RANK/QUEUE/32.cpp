#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<char> q;
    int size,count=0,n1;
    char elem;
       while(n1<3){
        cin>>n1;
        if(n1==1){
            cin>>elem;
            q.push(elem);
            count++;
        }
        if(count>7){
            cout<<"OVERFLOW";
            return 0;
        }
        if(n1==2){
            q.pop();
        }

       }
       cout<<q.front()<<endl;
       cout<<q.back()<<endl;
    
   
}