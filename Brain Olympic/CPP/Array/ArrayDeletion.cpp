#include<iostream>
using namespace std;

int main()
{
    int size,Del_elem,Del_index;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }



    cout<<"Enter the index of number for deletion"<<endl;
    cin>>Del_index;
    for(int i=Del_index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Array after deleting the number from index "<<Del_index<<" is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }




    /*cout<<"Enter the elements which you want to delete"<<endl;
    cin>>Del_elem;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==Del_elem)
        {
            for(int j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            cout<<"Array after deleting "<<Del_elem<<" is: "<<endl;
            for(int k=0;k<size;k++)
            {
                cout<<arr[k]<<" ";
            }
        }
    }*/
    return 0;
}