#include<iostream>
using namespace std;

void swap(int arr[],int x,int y)
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
int main()
{
    int N,p=0;
    cin>>N;
    int arr[N],arr1[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int pivot=arr[N-1];
    for(int i=0;i<N;i++)
    {
        if(arr[i]<pivot)
        {
            arr1[i]=arr[i];
            p++;
        }
    }
    swap(arr,p,N-1);
    int pivot=arr[N-1];
    for(int i=p+1;i<N;i++)
    {
        if(arr[i]<pivot)
        {
            
        }
    }

}