#include<iostream>
using namespace std;


bool isPossible(int arr[],int size,int m,int mid)
{
    int pageSum = 0,studenCount = 1;
    for(int i=0; i<size; i++)
    {
        if(pageSum <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studenCount++;
            if(studenCount > m || pageSum > arr[i])
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}


int binary_search(int arr[],int n,int m)
{
    int ans = -1;
    int beg = 0,end = 0;
    for(int i=0; i<n; i++)
    {
        end+=arr[i];
    }
    int mid = 0;
    while(beg <= end)
    {
        mid = beg + (end - beg)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            end = mid -1;
        }
        else 
        {
            beg = mid+1;
        }
    
    }
    return ans;
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the pages of each book in increasing order " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the number of student " << endl;
    cin >> m;
    int minimum = binary_search(arr,N,m);
    cout << "The maximum of the minimum is: " << minimum << endl;
    return 0;
}