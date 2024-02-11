#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        int max = INT_MIN;
        int index_max = 0;
        for(int j = 0; j <= size - i - 1; j++)
        {
            if(arr[j] > max) 
            {
                max = arr[j];
                index_max = j;
            }
        }
        int temp = arr[size - i - 1];
        arr[size - i - 1] = max;
        arr[index_max] = temp;
    }
}

void display(int arr[],int size)
{
    cout << "Sorted array using selection sorting technique : ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array " << endl;
    for(int i = 0; i < size; i++) cin >> arr[i];
    selection_sort(arr,size);
    display(arr,size);
    return 0;
}