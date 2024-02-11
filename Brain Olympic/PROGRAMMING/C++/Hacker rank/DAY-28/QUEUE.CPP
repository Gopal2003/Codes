#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<string> q)
{
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<string> q;
    string x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.push(x);
    }
    for(int i=0;i<3;i++)
    {
        x=q.front();
        q.pop();
        q.push(x);
        printQueue(q);
    }
    cout<<q.front();
    return 0;
}