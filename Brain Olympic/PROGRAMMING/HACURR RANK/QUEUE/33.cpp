#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    int seats,t,count=0;
    string Name;
    cin>>seats;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>Name;
        q.push(Name);
    }
    if(t>seats){
        cout<<"Houseful";
    }
    if(t<=seats){
        cout<<"Booked";
    }

}