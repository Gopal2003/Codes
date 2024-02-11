#include<iostream>
using namespace std;

void swap(int arr[],int x,int y)
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
int partition(int arr[],int p,int r)
{
    int i=p-1;//left side of side have all smaller elements then pivot so that we are not starting from oth index as we aare not aware of the 0th elememt
    int j=p;//for traversing
    int pivot=arr[r];
    while(j<r)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
        j++;
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
    }
}
void print(int arr[],int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,N-1);
    print(arr,0,N-1);
}