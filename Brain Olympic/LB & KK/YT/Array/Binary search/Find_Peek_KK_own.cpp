#include<iostream>
using namespace std;


int Peek_Binary_Search(int arr[],int size)
{
    int start = 0,end = size - 1,mid = 0;
    while(start < end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return arr[start];
}
int main()
{
    int N;
    cout << "Enter the size of the array" << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements in peek order i.e., first increasing and then decreasing order" << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int peek_element = Peek_Binary_Search(arr,N);
    if(peek_element == -1)
    {
        cout << "Element is not present in the array " << endl;
        return 0;
    }
    cout << "peek element is " << peek_element << endl;
    return 0;
}