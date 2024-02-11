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
    int i = 0,a = 0,b = N-1;
    while(i <= b)
    {
            if(arr[i] == 0)
            {
                swap(arr[a],arr[i]);
                a++;
                i++;
            }
            else if(arr[i] == 2)
            {
                swap(arr[i],arr[b]);
                b--;
            }
            else
            {
                i++;
            }
         
    }
    cout << "The array after sorting 0,1,2 is : " << endl;
    for(int i=0; i<N; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}