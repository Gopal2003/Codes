#include<iostream>
using namespace std;


int binary_search(int arr[],int size, int target)
{
    int start = 0,end = size - 1,mid = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] <= target)
        {
            // ans = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return arr[end];
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
    int M = 0;
    cout << "Enter the number of which you want a floor value from the elements of array " << endl;
    cin >> M;
    int Floor = binary_search(arr,N,M);
    cout << "The floor of the entered element is " << Floor << endl;
    return 0;
}