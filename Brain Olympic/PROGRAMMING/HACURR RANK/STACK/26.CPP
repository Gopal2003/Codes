#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int n,count=0,count1=0;
    string bookName;
    cin>>n;
    if(n>0 && n<=6){
        string arr[n];
        stack <string> s;
        for(int i=0;i<n;i++){
            cin>>bookName;
            s.push(bookName);
            count++;
        }
        for(int i=0;i<n;i++){
            arr[i]=s.top();
            s.pop();
        }
        for(int i=0;i<n;i++){
            cout<<arr[i];
            count1++;
            if(count1<=n-1){
            cout<<"->";
            }
        }
        

    }
    else if(n>6){
        cout<<"Full Box";
    }
    else{
        cout<<"Empty Box";
    }
    
    
}