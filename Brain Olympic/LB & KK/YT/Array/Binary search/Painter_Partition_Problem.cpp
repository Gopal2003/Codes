#include<iostream>
using namespace std;

bool isPossible(int arr[],int N,int M,int mid)
{
    int painterCount = 1,painterSum = 0;
    for(int i=0; i<N; i++)
    {
        if(arr[i] > mid) return false;
        if(painterSum  + arr[i] > mid)
        {
            painterCount++;
            painterSum = arr[i];
            if(painterCount > M)
            return false;
        }
        else
        {
            painterSum += arr[i];
        }
    }
    return true;
}

int binary_search(int arr[],int size,int M)
{
    int beg = 0,mid =0,end =0,ans = -1;
    for(int i=0; i<size; i++) end +=arr[i];
    while(beg <= end)
    {
        mid = beg + (end - beg)/2;
        if(isPossible(arr,size,M,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
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
    cout << "Enter the elements of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int M;
    cout << "Enter the number of painters " << endl;
    cin >> M;
    int minimum = binary_search(arr,N,M);
    cout << "Minimum of the maximum is: " << minimum << endl;
    return 0;
}