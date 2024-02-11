#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int arr[], int size)
{
    int Min_index, i, j,k;
    for (i = 0; i < size-1; i++)
    {
        Min_index = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[Min_index])
            {
                Min_index = j;
            }
        }
        swap(&arr[Min_index], &arr[i]);

        for (k = 0; k < size; k++)
        {
            cout << arr[k] << " ";
        }
        cout<<endl;
    }
}


main()
{
    int i, n, Z;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SelectionSort(arr, n);
}