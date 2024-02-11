#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    queue<char> q;
    string elem;
    getline(cin,elem);
    int strLength=elem.size();
    if(strLength<25){    
        for(int i=0;i<strLength;i++){
            
             q.push(elem[i]);
        }
        for(int j=0;j<strLength;j++){
            if(q.front()==','){
                break;
            }
            q.pop();
        }
        q.pop();
        int q_size=q.size();
        string x;
        for(int k=0;k<q_size;k++){
             x=x+string(1,q.front());
             q.pop();
        }
        cout<<x;

    }

}