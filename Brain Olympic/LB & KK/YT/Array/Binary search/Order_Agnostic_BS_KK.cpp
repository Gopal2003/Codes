#include<iostream>
using namespace std;


int Binary_search(int arr[],int size,int target)
{
    int start = 0,end = size - 1,mid = 0;
    bool isAsc = arr[start] < arr[end];
    bool isDsc = arr[start] > arr[end];
    if(isAsc)
    {
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(target > arr[mid])
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }
    }
    else if(isDsc)
    {
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(target > arr[mid])
            {
                end = mid - 1;
            }
            else 
            {
                start = mid + 1;
            }
        }

    }
    else
    {
        return 0;
    }
    return -1;
}



int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int target = 0;
    cout << "Enter the target element to find in the array " << endl;
    cin >> target;
    int index = Binary_search(arr,N,target);
    if(index == 0)
    {
        cout << "Array is not either in ascending order or in the descending order " << endl;
    }
    else if(index == -1)
    {
        cout << "Element is not present in array " << endl;
    }
    else
    {
        cout << "Element " << target << " is present at the index " << index << endl; 
    }
    return 0;
}