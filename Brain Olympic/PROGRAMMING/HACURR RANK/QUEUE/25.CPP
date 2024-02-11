#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    int n,elem,currentElem=0;
    cin>>n;
    if(n>2 && n<=10){
        queue <int> q; 
        for(int i=0;i<n;i++){
            cin>>elem;
            if(elem>currentElem){
                 q.push(elem);
                 currentElem=elem;
            }
            else{
                i--;
            }
        }
        while(q.empty()==false){
            cout<<q.front()<<endl;
            q.pop();
        }

    }
    else{
        cout<<"Invalid size";
    }
}