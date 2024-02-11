#include<iostream>
using namespace std;


int peak_element(int arr[],int size)
{
    int start = 0,end = size - 1,mid = 0;
    while(start < end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}


int search(int arr[],int start,int end,int target )
{
    int mid = -1;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return mid;
}


int binary_search(int arr[],int size, int target)
{
    int peak_index = peak_element(arr,size);
    cout << "peak " << peak_index << endl;
    int left_half = search(arr,0,peak_index - 1,target);
    if(left_half != -1)
    {
        return left_half;
    }
    int right_half = search(arr,peak_index + 1,size - 1,target);
    if(right_half != -1)
    {
        return right_half;
    }
    return left_half;
}


int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the element of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int target = 0;
    cout << "Enter the element which is need to be find in the entered array " << endl;
    cin >> target;
    int index = binary_search(arr,N,target);
    if(index == -1)
    {
        cout << "Element is not present in the array " << endl;
    }
    else
    {
        cout << "Element " << target << " is present at " << index << endl;
    }
    return 0;
}