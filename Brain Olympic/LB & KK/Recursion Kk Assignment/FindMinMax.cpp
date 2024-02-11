#include<bits/stdc++.h>
using namespace std;



int findMin(int arr[],int min,int index,int size)
{
    if(index == size) return min;
    if(arr[index] < min)
    {
        min = arr[index];
    }
    return(findMin(arr,min,++index,size));
}

int findMax(int arr[],int max,int index,int size)
{
    if(index == size) return max;
    if(arr[index] > max)
    {
        max = arr[index];
    }
    return(findMax(arr,max,++index,size));
}


int main()
{
    int size;
    int min = INT_MAX;
    int max = INT_MIN;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int minElem = findMin(arr,min,0,size);
    int maxElem = findMax(arr,max,0,size);
    cout << "Minimum element: " << minElem << endl;
    cout << "Maximum elenent: " << maxElem << endl;
    return 0;
}