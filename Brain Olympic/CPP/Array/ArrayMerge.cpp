#include<iostream>
using namespace std;

int main()
{
    int size_1,size_2,k=0,j=0,i=0;
    cout<<"Enter the size of the first and second array "<<endl;
    cin>>size_1;
    cin>>size_2;
    int arr_1[size_1],arr_2[size_2];
    cout<<"Enter the element of first array in sorted order"<<endl;
    for(int i=0;i<size_1;i++)
    {
        cin>>arr_1[i];
    }
    cout<<"Enter the elements of second array in sorted order"<<endl;
    for(int i=0;i<size_2;i++)
    {
        cin>>arr_2[i];
    }
    int arr_merge[size_1+size_2];
    while(i<size_1 && j<size_2)
    {
        if(arr_1[i]<arr_2[j])
        {
            arr_merge[k++]=arr_1[i++];
        }
        else
        {
            arr_merge[k++]=arr_2[j++];
        }
    }
    if(j==size_2)
    {
        while(i<size_1)
        {
            arr_merge[k++]=arr_1[i++];
        }
    }
    else
    {
        while(j<size_2)
        {
            arr_merge[k++]=arr_2[j++];
        }
    }
    cout<<"Merged array: "<<endl;
    for(int l=0;l<size_1+size_2;l++)
    {
        cout<<arr_merge[l]<<" ";
    }
    return 0;

}