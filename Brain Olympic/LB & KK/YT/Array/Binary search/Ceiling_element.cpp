//Given an array arr = [2,3,5,9,14,16,18] and the target element is 15. We need to find the ceiling element from the array such that \
arr[i] >= target .

#include<iostream>
using namespace std;


bool isPresent(int arr[],int mid,int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == arr[mid])
        {
            return true;
        }
    }
    return false;
}
int binary_search(int arr[],int size, int tar)
{
    int beg = 0,end = size - 1,ans = 0;
    int mid = 0;
    while(beg <= end)
    {
        mid = beg + (end - beg)/2;
        if(arr[mid] >= tar && isPresent(arr,mid,size))
        {
            ans = arr[mid];
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    return arr[beg]; // or  return ans but to avoid that extra int space we ditectly return arr[beg].watch Kunal kushwaha's binary search video if any doubt..
}
//The below approach use and extra O(n) time to find the max element.
// int binary_search(int arr[],int size, int tar)
// {
//     int beg = 0,end = 0,ans = 0;
//     for(int i=0;i<size;i++)
//     {
//         end = max(end , arr[i]);
//     }
//     int mid = 0;
//     while(beg <= end)
//     {
//         mid = beg + (end - beg)/2;
//         if(mid >= tar && isPresent(arr,mid,size))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             beg = mid + 1;
//         }
//     }
//     return ans;
// }
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
    int ceiling_elem = binary_search(arr,N,target);
    cout << "Ceiling element is : " << ceiling_elem << endl;
    return 0;
}