#include<iostream>
using namespace std;

int main()
{
    int N1,N2;
    cout << "Enter the size of the first array " << endl;
    cin >> N1;
    cout << "Enter the size of the second array " << endl;
    cin >> N2;
    int arr1[N1],arr2[N2];
    cout << "Enter the elements of the first array " << endl;
    for(int i=0; i<N1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array " << endl;
    for(int i=0; i<N2; i++)
    {
        cin >> arr2[i];
    }

    // for(int i=0; i<N1; i++)
    // {
    //     for(int j=0; j<N2; j++)
    //     {
    //         if(arr1[i] == arr2[j])
    //         {
    //             cout << arr1[i] << " ";
    //             arr2[j] = -3436356;
    //             break;
    //         }
    //     }
    // }

    //Solution 2: with less time complexity:
    int i = 0,j = 0;

    while(i < N1 && j < N2)
    {
        if(arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }
    return 0;
}