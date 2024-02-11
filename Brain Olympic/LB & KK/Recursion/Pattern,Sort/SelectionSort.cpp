#include<bits/stdc++.h>
using namespace std;


// int getMax(vector<int>& arr,int idx,int curridx,int maxIdx,int maxval)
// {
//     if(curridx > idx)
//     {
//         return maxIdx;
//     }
//     if(arr[curridx] > maxval)
//     {
//         maxval = arr[curridx];
//         maxIdx = curridx;
//     }
//     return(getMax(arr,idx,++curridx,maxIdx,maxval));
// }

// vector<int> selectionSort(vector<int>& arr,int idx)
// {
//     if(idx == 0) return arr;
//     int i = getMax(arr,idx,0,-1,INT_MIN);
//     swap(arr[i],arr[idx]);
//     idx--;
//     return(selectionSort(arr,idx));
// }

vector<int> selectionSort(vector<int>& arr,int RemCol,int currIdx,int maxIdx)
{
    if(RemCol == 0) return arr;
    if(currIdx < RemCol)
    {
        if(arr[currIdx] > arr[maxIdx])
        {
            return(selectionSort(arr,RemCol,currIdx + 1,currIdx));
        }
        else
        {
            return(selectionSort(arr,RemCol,++currIdx,maxIdx));
        }
    }
    else
    {
        swap(arr[maxIdx],arr[RemCol - 1]);
        return(selectionSort(arr,--RemCol,0,0));
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < n; i++) cin >> arr[i];
    arr = selectionSort(arr,n,0,INT_MIN);
    cout << "Sorted array is: " << endl;
    for(int i = 0 ; i < n; i++) cout << arr[i] << " ";
    return 0; 
}