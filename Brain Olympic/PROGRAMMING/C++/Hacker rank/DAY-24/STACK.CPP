#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;
    int n,x;
    cin>>n;
    int arr[n];
    if(n!=0 && n>=3)
    {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)
            {
                s.push(x);
                arr[i]=x;
            }
        }
        if(n%2!=0) cout<<arr[n/2]<<endl;
        else cout<<arr[(n/2)-1]<<endl;
        s.pop();
        if(n%2==0) cout<<arr[(n/2)-1];
        else cout<<arr[((n-1)/2)-1];
    }
    return 0;
}