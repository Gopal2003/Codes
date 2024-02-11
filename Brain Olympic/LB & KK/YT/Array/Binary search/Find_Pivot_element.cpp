#include<iostream>
using namespace std;

int find_pivot(int arr[], int size)
{
    int beg = 0,end = size - 1,mid = 0;
    while(beg < end)
    {
        mid = beg + (end-beg)/2;
        if(arr[mid] >= arr[0])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid;
        }
    } 
    return arr[beg];
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N]; //Rotated sorted array.... eg-> 1 2 3 4 5 --> 4 5 1 2 3
    cout << "Enter the elements of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int pivot = find_pivot(arr,N);
    cout << "The pivot element of the entered array is " << pivot << endl;
    return 0;
}