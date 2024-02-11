#include<iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the array" << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array" << endl;
    for(int i=0 ;i<N; i++)
    {
        cin >> arr[i];
    }
    // int repeated_elem = 0;
    // int missing_elem = 0;
    // for(int i=0; i<N; i++)
    // {
    //     int temp = abs(arr[i]);
    //     if(arr[temp - 1]<0)
    //     {
    //         repeated_elem=temp;
    //     }
    //     else
    //     {
    //         arr[temp-1]= -arr[temp-1];
    //     }
    // }
    // cout << "Repeated element is: " << repeated_elem <<endl;

    //solution 2:
    int ans=0;
    for(int i=0; i<N; i++)
    {
        ans = ans^arr[i];
        cout << "ans: " << ans <<endl;
    }
    for(int i=1; i<N; i++)
    {
        ans = ans^i;
        cout << "An " << ans << endl; 
    }
    cout << "Duplicate element: " << ans;
    return 0;
}