#include<iostream>
using namespace std;
void insertion_sort(int arr[], int size)
{
    for(int i = 0; i <= size - 2; i++)
    {
        int current = arr[i];
        int j = i + 1;
        while(arr[j] < arr[j - 1] && j > 0)
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
void display(int arr[],int size)
{
    cout << "Sorted array using insertion sort technique: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the size of the array " << endl;
    for(int i = 0; i < size; i++) cin >> arr[i];
    insertion_sort(arr,size);
    display(arr,size);
    return 0;
}