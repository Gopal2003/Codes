#include <bits/stdc++.h>
using namespace std;

int BinarySearchUsingRecursion(int arr[], int start, int end, int target)
{
    if(start > end) return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return BinarySearchUsingRecursion(arr, start, mid - 1, target);
    }
    return BinarySearchUsingRecursion(arr, mid + 1, end, target);
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 0;
    cout << "Enter the target element that you want to find " << endl;
    cin >> target;
    int index = BinarySearchUsingRecursion(arr, 0, 9, target);
    cout << "The element is present at the index " << index << endl;
}