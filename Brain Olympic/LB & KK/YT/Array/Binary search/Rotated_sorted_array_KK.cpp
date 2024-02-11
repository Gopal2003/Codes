#include<iostream>
using namespace std;

//pivot in this case is the maximum element in the array
int Find_pivot(int arr[],int size)
{
    int start = 0,end = size - 1,mid = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if( mid < end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if(mid > start && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        //for duplicate elements
        if(arr[start] == arr[mid] && arr[mid] == arr[end])
        {
            if(arr[start] > arr[start + 1]) //what if start is our pivot element
            {
                return start ; //then we found our pivot element   
            }
            start++;
            if(arr[end - 1] > arr[end]) //what if end if out pivot 
            {
                return end - 1;
            } 
            end--;
        }
        else if(arr[start] < arr[mid] || arr[start] == arr[mid] && arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        
        // else if(arr[start] > arr[mid])
        // {
        //     end = mid - 1;
        // }
        // else
        // {
        //     start = mid + 1;
        // }
    }
    return -1;// This indicates that array is not rotated.
}

int binary_search(int arr[],int start,int end,int target)
{
    int mid = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}


int Pathway(int arr[],int size,int target)
{
    int pivot_index = Find_pivot(arr,size);
    cout << "Pivot " << pivot_index << endl;
    int start = 0,end = size - 1;
    if(pivot_index == -1)
    {
        binary_search(arr,0,size - 1,target);
    }
    else
    {
        if(arr[pivot_index] == target)
        {
            return pivot_index;
        }
        else if(target < arr[start]) 
        {
            start = pivot_index + 1;
        }
        else if(target >= arr[start])
        {
            end = pivot_index - 1;
        }
    }
    return binary_search(arr,start,end,target);
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
    cout << "Enter the element that you want to find in the rotated sorted array " << endl;
    cin >> target; 
    int index = Pathway(arr,N,target);
    cout << "The entered element is present at the index " << index << endl;
    return 0;
}