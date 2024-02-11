#include<bits/stdc++.h>
using namespace std;

void sumofT(int arr[],int size)
{
    if(size == 0) return ;
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + arr[i + 1];
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sumofT(arr,size-1);
}

int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < size; i++) cin >> arr[i];
    sumofT(arr,size - 1);
    return 0;
}