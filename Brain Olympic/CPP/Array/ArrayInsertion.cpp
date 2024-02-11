#include<iostream>
using namespace std;
int main()
{
    int size,size_elem;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the number of elements in array"<<endl;
    cin>>size_elem;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size_elem;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element and the position where you want to insert it"<<endl;
    int idx,elem;
    cin>>elem;
    cin>>idx;
    for(int j=size_elem-1;j>=idx;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[idx]=elem;
    //cout<<"11";
    cout<<"Array after inserting "<<elem<<" at the index "<<idx<<" is "<<endl;
    for(int k=0;k<size_elem+1;k++)
    {
        cout<<arr[k]<<" ";
    }
}