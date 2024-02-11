#include<iostream>
using namespace std;

int binarySortedSearch(int arr[],int beg,int end,int key)
{
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[beg]<arr[mid])
        {
            if(key>=arr[beg] && key<arr[mid])
            {
                end=mid-1;
            }
            else
            {
                beg=mid+1;
            }
        }
        else
        {
            if(key>arr[mid] && key<=arr[end])
            {
                beg=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
} 
int main()
{
    int size,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value that you want to search in array"<<endl;
    cin>>key;
    int result=binarySortedSearch(arr,0,size-1,key);
    if(result==-1)
    {
        cout<<"Element is not present in array";
    }
    else
    {
        cout<<"The index of the key is "<<result;
    }
    return 0;
}