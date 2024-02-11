#include <iostream>
using namespace std;
int main()
{
    int a[20], n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (a[j] % 2 != 0 && a[j + 1] % 2 != 0 && a[j + 2] % 2 != 0)
            {
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                count += 1;
            }
        }
    }

    for (int i = 0; i < n - count; i++)
    {
        cout << a[i] << " ";
    }
}