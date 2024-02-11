#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<N;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(current>arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}