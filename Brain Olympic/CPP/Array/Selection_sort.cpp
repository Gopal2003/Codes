#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N,var;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"1-->Ascending order 2-->Ddecending order"<<endl;
    cin>>var;
    switch(var)
    {
        case 1:
            for(int i=0;i<N-1;i++)
            {
                int min=i;
                int j=i+1;
                for(;j<N;j++)
                {
                    if(arr[j]<arr[min])
                    {
                        min=j;
                    }

                }
                if(min!=j)
                {
                    int temp=arr[i];
                    arr[i]=arr[min];
                    arr[min]=temp;
                }
            }
            break;

        case 2:
            for(int i=0;i<N-1;i++)
            {
                int max=i;
                int j=i+1;
                for(;j<N;j++)
                {
                    if(arr[j]>arr[max])
                    {
                        max=j;
                    }
                }
                if(max!=j)
                {
                    int temp=arr[i];
                    arr[i]=arr[max];
                    arr[max]=temp;
                }
            }
            break;
        default:
           break;    

    }

    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
