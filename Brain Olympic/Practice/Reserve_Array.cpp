#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    // int arr[N];
    char arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int start=0,end=N-1;
    
       while(start<end)
        {
            // int temp=arr[start];
            char temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
