#include<iostream>
using namespace std;


int min(int arr[],int size)
{
    int min=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int N,max=0;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int buy=min(arr,N);
    for(int i=0;i<N;i++)
    {
        if(arr[i]==buy)
        {
            for(int j=i+1;j<N;j++)
            {
                if(arr[j]>max)
                {
                    max=arr[j];
                }
            }
            break;
        }
    }
    int profit=max-buy;
    if(profit>=0)
    {
      cout<<profit;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}