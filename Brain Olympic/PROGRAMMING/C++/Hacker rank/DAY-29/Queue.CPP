#include<iostream>
#include<queue>
using namespace std;


int main()
{
    queue<string> q;
    string name;
    int n,t,count=0;
    cin>>n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>name;
        q.push(name);
        count++;
    }
        
        if(t>n){
            cout<<"Houseful";
        }
        else{
            cout<<"Booked";
        }

    if(t>n){

    }    

    return 0;
}

