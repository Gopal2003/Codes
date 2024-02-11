#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int n,count=0;
    string inPt;
    stack<string> s;
    cin>>n;
    if(n>0 && n<=6 ){
        for(int i=0;i<n;i++){
        count++;
        cin>>inPt;
         s.push(inPt);
        }
        if(count>=1){
            int count1=0;
      while(s.empty()==false){
        count1++;
        cout<<s.top();
        if(count1<=n-1){
            cout<<"->";
        }
        s.pop();
      }
        }
    }
    else if(n>6)
    {
            cout<<"Full Box";
    }
    else{
        cout<<"Empty Box";
    }
    
}