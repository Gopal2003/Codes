#include<iostream>
using namespace std;

int arr_1[2] = {-1,-1};

int binary_search_right(int arr[],int start,int end,int target)
{
    int  mid,ans = -2;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            ans = mid;
            cout << "right ans " << ans << endl;
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return ans;

}
int binary_search_left(int arr[],int start,int end,int target)
{
    int  mid,ans = -2;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            ans = mid;
            cout << "Left ans " << ans << endl;
            end = mid - 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return ans;

}
int* binary_search(int arr[],int size,int target)
{
    int start = 0,end = size - 1,mid = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            arr_1[0] = mid;
            arr_1[1] = mid;
            int first = binary_search_left(arr,0,mid - 1,target);
            int last = binary_search_right(arr,mid + 1,end,target);
            if(first != -2)
            {
                arr_1[0] = first;
            }
            if(last != -2)
            {
                arr_1[1] = last;
            }
            return arr_1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }   
    }
    return arr_1;
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array in ascending order " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number which is present in array to find the first and last occurences " << endl;
    int num = 0;
    cin >> num;
    int *arr1_ptr = binary_search(arr,N,num); 
    cout << "The first index is: " << arr1_ptr[0] << endl;
    cout << "The last index is: " << arr1_ptr[1] << endl; 
    return 0;
}