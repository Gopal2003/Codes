#include<iostream>
using namespace std;


int binary_search(int arr[],int key,int beg,int end)
{
    int mid = 0;
    while(beg <= end)
    {
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

int pivot(int arr[],int size)
{
    int beg = 0,end = size - 1,mid = 0;
    while(beg < end)
    {
        mid = beg + (end - beg)/2;
        if(arr[mid] >= arr[0])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return beg;
}
int main()
{
    int N;
    int Binary_search;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of rotated sorted array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key which is needed to find in the rotated sorted array " << endl;
    cin >> key;
    int pivot_elem = pivot(arr,N);
    if(key >= arr[pivot_elem] && key <= arr[N - 1])
    {
        Binary_search=binary_search(arr,key,pivot_elem,N-1);
    }
    else
    {
        Binary_search=binary_search(arr,key,0,pivot_elem-1);
    }
    if(Binary_search != -1)
    {
        cout << "Element is present at the index : " << Binary_search << endl;
    }
    else
    {
        cout << "Element is not present " << endl;
    }
    return 0;
}