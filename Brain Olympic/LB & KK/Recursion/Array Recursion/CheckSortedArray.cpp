#include<bits/stdc++.h>
using namespace std;

/**
 * ! Check whether the array is sorted or not using recursion
*/

bool CheckSortedArray(int arr[],int sz,int idx,int check)
{
    if(idx == sz) return 1;
    /*if(arr[idx] > arr[idx + 1]) return 0;
    return(CheckSortedArray(arr,sz,++idx));*/
    //kk
    // cout << check << endl;
    check++;
    return(arr[idx] < arr[idx + 1] && CheckSortedArray(arr,sz,++idx,check));
}

int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < n; i++) cin >> i[arr];
    if(CheckSortedArray(arr,n,0,0))
    {
        cout << "The Given array is sorted in ascending order " << endl;
    }
    else cout << "The Given array is not sorted " << endl;
    return 0;
}