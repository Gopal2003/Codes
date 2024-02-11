#include<iostream>
using namespace std;


int* Binary_search(int arr[],int size, int target)
{
    int start = 0,end = size - 1,mid = start + (end - start)/2; 
    int arr_index[2] = {0};
    while(start <= end)
    {
        if(start == mid)
        {
            mid = mid + 1;
        }
        else if(arr[mid] + arr[start] == target)
        {
            arr_index[0] = start + 1;
            arr_index[1] = mid + 1;
            return arr_index;
        }
        else if(arr[mid] + arr[end] == target)
        {
            arr_index[0] = end + 1;
            arr_index[1] = mid + 1;
            return arr_index;
        }
        
        
    }
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
    cout << "Enter the target element " << endl;
    cin >> target;
    int *ptr = Binary_search(arr,N,target);
}