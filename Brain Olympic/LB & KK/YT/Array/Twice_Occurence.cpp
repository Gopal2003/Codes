#include<iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int idx = 0;
    for(int i=0; i<N; i++)
    {
        int temp = abs(arr[i]);
        if(arr[temp - 1] < 0)
        {
            idx++;
        }
        else
        {
            arr[temp - 1] = -arr[temp-1];
        }
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = abs(arr[i]);
        }
    }
    // for(int i=0; i<N; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int arr_duplicate[idx];
    idx = 0;
    for(int i=0; i<N; i++)
    {
        int temp = abs(arr[i]);
        if(arr[temp - 1] < 0)
        {
            arr_duplicate[idx] = temp;
            idx++;
        }
        else
        {
            arr[temp - 1] = -arr[temp-1];
        }
    }
    int size = sizeof(arr_duplicate)/sizeof(int);
    for(int i=0; i<size; i++)
    {
        cout << arr_duplicate[i] << " ";
    }
    return 0;
}