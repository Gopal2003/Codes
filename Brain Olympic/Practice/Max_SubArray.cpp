#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int max_ending_here=0,max_so_far=0;
    for(int i=0;i<N;i++)
    {
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
        }
        
    }
    cout<<max_so_far;
    return 0;
}