#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& arr,int remCol,int currCol)
{
    if(remCol == 0) return arr;
    if(currCol >= remCol)
    {
        currCol = 0;
        remCol--;
        return(bubbleSort(arr,remCol,currCol));
    }
    else
    {
        if(arr[currCol] > arr[currCol + 1])
        {
            swap(arr[currCol],arr[currCol + 1]);
            currCol++;
            return(bubbleSort(arr,remCol,currCol));
        }
        else
        {
            currCol++;
            return(bubbleSort(arr,remCol,currCol));
        }
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
    arr = bubbleSort(arr,n - 1,0);
    cout << "The sorted array using recursion is: " << endl;
    for(int i = 0 ; i < n; i++) cout << arr[i] << " ";
    return 0; 
}