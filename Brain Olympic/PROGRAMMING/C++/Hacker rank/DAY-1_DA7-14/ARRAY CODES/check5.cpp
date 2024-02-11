#include <iostream>
//NOT DONE BY MY OWN
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;

    int max = 0, index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    for (int i = n - 1; i > index; i--)
        arr[i + 1] = arr[i];

    arr[index + 1] = x;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}