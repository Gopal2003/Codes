#include<iostream>
using namespace std;


int peek(int arr[], int size)
{
    int beg = 0,end = size - 1,mid = 0;
    while(beg < end)
    {
        mid = beg + (end - beg)/2;
        if(arr[mid] < arr[mid + 1])
        {
            beg = mid + 1;
        }
        else if(arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
    }
    return beg;
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int idx = peek(arr,N);
    cout << "Peek element index is : " << idx << endl;
    return 0;
}