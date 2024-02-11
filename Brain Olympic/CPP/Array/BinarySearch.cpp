#include<iostream>
using namespace std;

int BinarySearch(int n,int data,int arr[])
{
    int beg=0,end=n-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
        else if(data<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return -1;

}
int main()
{
    int size,elem,big,end,mid,elemSearch;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array in sorted order"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to search in array"<<endl;
    cin>>elemSearch;
    int index=BinarySearch(size,elemSearch,arr);
    if(index==-1)
    {
        cout<<"element is not present in array";
    }
    else
    {
        cout<<"element is present at the index "<<index;
    }
   
}