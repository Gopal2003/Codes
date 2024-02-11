#include<iostream>
using namespace std;

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
    int a = 0,i=1;
    while(i < N)
    {
        if( arr[a] == 0)
        {
            a++;
            i++;
        }
        else
        {
                if(arr[i] == 0)
                {
                    swap(arr[i],arr[a]);
                    a++;
                    i++;
                }
                else
                {
                    i++;
                }
        }
    }
    cout << "sorted array of 0 and 1 is: " << endl;
    for(int k=0; k<N; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}