#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    // int arr[2]={1,2};
    // char ch[6] = "abcde";
    // cout << &arr[0] << endl;
    // cout << &ch[0] << endl;
    // char *ptr1 = &ch[0];
    // int *ptr2 = &arr[0];
    // cout << ptr1 << endl;
    // cout << ptr2 << endl;

    // for(int i = 0; i < 2; i++)
    // {
    // cout << i[arr] << endl;
    // }

    //
    /*int rows;
    cout << "Enter the Number of rows of the 2D jagged array: ";
    cin >> rows;
    int **J = new int *[rows];
    // cout << "Enter the size of each row " << endl;
    int size[rows] = {4, 3, 2, 1};
    for (int i = 0; i < rows; i++)
    {
        J[i] = new int[size[i]];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cin >> J[i][j];
        }
    }
    cout << "elements in matrix form as follow" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << J[i][j] << " ";
        }
        cout << endl;
    }*/
    // int a = 10;
    // int *p =new int[]; // P is stored in stack and pointing to the memory address of the integer space allocated in the heap.
    // *p = 12;
    // cout << *p;
    int n = 15;
    int i = 0;
    int ans = 0;
    while(n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i)) +ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
    return 0;
}