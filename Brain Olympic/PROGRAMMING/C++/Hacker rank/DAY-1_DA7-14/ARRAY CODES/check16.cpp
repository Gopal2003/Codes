#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
main()
{
    int N, key, i;
    cout << "Enter the size of array" << endl;
    cin >> N;
    int arr[N];
    if (N < 1000000)
    {
        cout<<"Enter the elements of array"<<endl;
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
        cout << "Enter the key  to be searched" << endl;
        cin >> key;

        int result = binarySearch(arr, key, 0, N - 1);
        if (result == -1)
            printf("Not found");
        else
            cout<<"Element is found at index "<<result;
    }
}
