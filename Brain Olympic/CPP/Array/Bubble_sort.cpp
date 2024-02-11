#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the size of the array"<<endl;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}