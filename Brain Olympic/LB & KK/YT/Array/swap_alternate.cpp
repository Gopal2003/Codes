#include<iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the array"<<endl;
    cin >> N;
    int arr[100];
    cout << "Enter the elements of the array "<<endl;
    for(int i=0 ;i<N; i++)
    {
        cin >> arr[i]; 
    }
    int j=0;
    while(j+1 < N)
    {
        swap(arr[j],arr[j+1]);
        j += 2;
    }
    cout << "The elements of the array after swapping the alternate elements is: "<<endl;
    for(int i=0; i<N; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
