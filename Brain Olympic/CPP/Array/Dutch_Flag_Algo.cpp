#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int swap(int arr_1[],int arr_2[])
{

}
int main()
{
    int N;
    cout<<"Enter the size of array "<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter the elements of array to implement the Dutch flag algo"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int a=0,b=N-1,i=0;
    while(i<=b)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[a]);
            a++;
            i++;
            
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[b]);
            b--;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}