#include<iostream>
using namespace std;

int main()
{
    int N,idx=0;
    cin>>N;
    int arr[N];
    int b=N-1;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i]>=0)
        {
            // cout<<"b: "<<b<<endl;
            while(arr[b]>0 && b>i) b--;
            int temp=arr[b];
            arr[b]=arr[i];
            arr[i] = temp;

        }
    }
    cout<<"Final array"<<endl;
    for(int j=0;j<N;j++)
    {
        cout<<arr[j]<<" ";
    }
}