#include<bits/stdc++.h>
using namespace std;


void sort(vector<int>& arr,int low,int high)
{
    if(low >= high) return;
    int s = low;
    int e = high;
    int m = s + (e - s) / 2;
    int pivot = arr[m];
    while(s <= e)
    {
        while(arr[s] < pivot)
        {
            s++;
        }
        while(arr[e] > pivot)
        {
            e--;
        }
        if(s <= e)
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    sort(arr,low,e);
    sort(arr,s,high);
    
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the values of the array " << endl;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,0,n - 1);
    cout << "Sorted array: " << endl;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}