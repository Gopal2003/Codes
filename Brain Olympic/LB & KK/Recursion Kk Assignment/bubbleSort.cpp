#include <bits/stdc++.h>
using namespace std;

/*bool Swap = false;

vector<int> bubbleSort(vector<int>& arr,int idx)
{
    if(idx == arr.size() - 1 && !Swap) return arr;
    if(idx == arr.size() - 1)
    {
        Swap = false;
        return(bubbleSort(arr,0));
    }
    if(arr[idx] > arr[idx + 1])
    {
        swap(arr[idx], arr[idx + 1]);
        Swap = true;
        return(bubbleSort(arr,++idx));
    }
    else
    {
        return(bubbleSort(arr,++idx));
    }
}
*/

vector<int> bubblesort(vector<int>& arr,int idx,int c)
{
    // cout << "idx: " << idx << " ";
    if(c == arr.size() - 1) return arr;
    // cout << c <<  " ";
    // cout << "firstIf" << " ";
    if(idx == arr.size() - 1 - c) return(bubblesort(arr,0,++c));
    // cout << "secondIf" << " ";
    if(arr[idx] > arr[idx + 1])
    {
        // cout << "swap" << " ";
        swap(arr[idx] , arr[idx + 1]);
    }
    // cout << "Outside of if swap" << " "; 
    // cout << endl;
    return(bubblesort(arr,++idx,c));
}

int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // arr = bubblesort(arr,0,0);
    bubblesort(arr,0,0);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}