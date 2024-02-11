#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int N,int M,int mid)
{
    int lastPos = arr[0],cowCount = 1;
    for(int i=0; i<N; i++)
    {
        if(arr[i] - lastPos >= mid)
        {
            cowCount++;
            if(cowCount == M)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}
int binary_search(int arr[], int size, int M)
{
    sort(arr,arr + size);
    int beg = 0;
    int end = -1;
    for(int i=0; i<size; i++)
    {
        end = max(end , arr[i]);
    }
    int mid = 0,ans = -1;
    while (beg < end)
    {
        mid = beg + (end - beg)/2;
        if(isPossible(arr,size,M,mid))
        {
            ans = mid;
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int N;
    cout << "Enter the number of stalls " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the distance of each stall " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int M;
    cout << "Enter the number of aggressive cows " << endl;
    cin >> M;
    int num = binary_search(arr,N,M);
    cout << "Maximum distance: " << num << endl;
    return 0;
}