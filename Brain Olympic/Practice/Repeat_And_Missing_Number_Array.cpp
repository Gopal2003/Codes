#include<iostream>
using namespace std;

int main()
{
    int N;
    int repeated_elem=0,missing_elem=0;
    cin>>N;
    int arr[N];
    cout<<"Enter the element starting from 1 to "<<N<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        int temp=abs(arr[i]);
        if(arr[temp-1]<0)
        {
            repeated_elem=temp;
        }
        else
        {
            arr[temp-1]= -arr[temp-1];
            cout << arr[temp - 1] << endl;
        }
    }
    for(int k=0;k<N;k++)
    {
        if(arr[k]>0)
        {
            missing_elem=k+1;
        }
    }
    // for(int i=0;i<N;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<"Repeated number: "<<repeated_elem<<endl;
    cout<<"Missing number: "<<missing_elem;


    return 0;
}
    // cout<<endl;
    // cout<<repeated_elem;