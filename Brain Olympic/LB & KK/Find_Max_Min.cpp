#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    int min=0,max=0;
    for(int i=0;i<N;i++) cin>>arr[i];
    if(N==1)
    {
        cout<<arr[0]+arr[0];
    }
    if(arr[0]>arr[1])
    {
        min=arr[1];
        max=arr[0];
    }
    else
    {
       min=arr[0];
       max=arr[1]; 
    }
    for(int i=2;i<N;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

   cout<<max+min;

}