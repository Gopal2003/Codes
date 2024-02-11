#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    string x;
    int n1,n2;
    while(n1!=2)
    {
        cin>>n1;
        if(n1==1)
        {
            cin>>n2;
            for(int i=0;i<n2;i++)
            {
                cin>>x;
                s.push(x);
            }
        }
    }
    cout<<s.top()<<endl;
    s.pop();
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}