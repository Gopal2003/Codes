#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter the number of test cases: "<<endl;
    cin >> t;
    while(t--)
    {
        int size=0;
        cout << "Enter the size of the array: "<<endl;
        cin >> size;
        int arr[100];
        cout << "Enter the elements of the array: "<<endl;
        for(int i=0; i<size; i++)
        {
            cin >> arr[i];
        }
        // for(int i=0; i<size; i++)
        // {
        //     int count = 0;
        //     for(int j=0; j<size; j++)
        //     {

        //         if(arr[i] == arr[j] && i != j)
        //         {
        //             count++;
        //             break;
        //         }
        //     }
        //     if(count == 0)
        //     {
        //         cout << "unique element is: "<<arr[i]<<endl;
        //         break;
        //     }
        // }
        int ans=0;
        for(int i=0; i<size; i++)
        {
            ans = ans ^ arr[i];
            cout<<ans<<endl;
        }
        cout <<"final: "<<  ans << endl;

    }
    return 0;
}
