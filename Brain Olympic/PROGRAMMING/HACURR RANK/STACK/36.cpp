#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <string> s;
    string name;
    int n1,n2,N;
    while(n1!=0){
        cin>>n1;
        if(n1==1){
            cin>>N;
            for(int i=0;i<N;i++){
                cin>>name;
                s.push(name);
            }
        }
        if(n1==2){
             string arr[N-1];
             int count=0;
             string temp=s.top();
               s.pop();
               cout<<temp<<endl;
               for(int j=0;j<N-1;j++){
                arr[j]=s.top();
                count++;
                s.pop();
               }
               for(int k=count-1;k>=0;k--){
                  cout<<arr[k]<<" ";
               }
               return 0;

        }
    }

}