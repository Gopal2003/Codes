#include<iostream>
using namespace std;


int Binary_Search_Dec(int arr[],int size,int key)
{
    int beg = 0,end = size - 1,mid = 0;
    while(beg <= end)
    {
       // mid = (beg + end)/2;
        mid = beg + (end - beg)/2;  
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        
    }
    return -1;
}

int Binary_Search_Inc(int arr[],int size,int key)
{
    int beg = 0,end = size - 1,mid = 0;
    while(beg <= end)
    {
       // mid = (beg + end)/2;
        mid = beg + (end - beg)/2;  
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
    }
    return -1;
}
int main()
{
    int N,idx = 0;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array either in increasing order or in decreasing order " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element which you want to search " << endl;
    int k;
    cin >> k;
    if(arr[0] > arr[1])
    {
        idx = Binary_Search_Dec(arr,N,k);
    }
    else
    {
        idx = Binary_Search_Inc(arr,N,k);
    }
    if (idx != -1 )
    {
        cout << "The element " << k << " is present at the index " << idx;
    }
    else
    {
        cout << "Element is not present " << endl;
    }
    return 0;
}