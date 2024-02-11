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
        else if(arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;// This indicates that array is not rotated.
}

int Count_Rotated_element(int arr[],int size)
{
    int pivot_index = Find_pivot(arr,size);
    // cout << "Pivot " << pivot_index << endl;
    if(pivot_index == -1)
    {
        return 0;
    }

    return pivot_index + 1;
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
    int index = Count_Rotated_element(arr,N);
    cout << "The number of element rotated is " << index << endl;
    return 0;
}