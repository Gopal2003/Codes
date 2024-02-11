#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& arr,int s,int mid,int e)
{
    vector<int> ans;
    int left = s;
    int right = mid + 1;
    while(left <= mid && right <= e)
    {
        if(arr[left] <= arr[right])
        {
            ans.push_back(arr[left]);
            left++;
        }
        else
        {
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        ans.push_back(arr[left]);
        left++;
    }
    while(right <= e)
    {
        ans.push_back(arr[right]);
        right++;
    }
    for(int i = s; i <= e; i++)
    {
        arr[i] = ans[i - s];
    }
}
void mergeSort(vector<int>& arr,int s,int e)
{
    if(s == e) return;
    int mid = s + (e - s) / 2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid + 1,e);
    merge(arr,s,mid,e);
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr,0,n - 1);
    cout << "The sorted array is: " << endl;
    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";
    return 0;
}