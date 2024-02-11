// #include<iostream>
// #include<stack>
// using namespace std;

// int main()
// {
//     int N,index,j=0;
//     cin>>N;
//     int arr[N];
//     for(int i=0;i<N;i++)
//     {
//         cin>>arr[i];
//     }
    
//     for(int i=N-1;i>=0;i--)
//     {
//         if(arr[i-1]<arr[i])
//         {
//             index=i-1;
//             break;
//         }
//     }

//     for(int i=N-1;i>=0;i--)
//     {
//         if(arr[i]>arr[index])
//         {
//             j=i;
//             break;
//         }
//     }

//     int temp=arr[index];
//     arr[index]=arr[j];
//     arr[j]=temp;
//     int start=index+1,end=N-1;
//     for(int i=start;i<N;i++)
//     {
//         if(i<end)
//         {
//             int temp=arr[i];
//             arr[i]=arr[end];
//             arr[end]=temp;
//             end--;
//         }
//     }

//     cout<<"The next permutation of the entered array is "<<endl;
//     for(int i=0;i<N;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }
#include<iostream>
#include<stack>
using namespace std;


void swap(int arr[],int x,int y)
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}

void reverse(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr,start++,end--);
    }
}
int main()
{
    int N,j=0,i=0;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=N-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            break;
        }
    }
    if(i>=0)
    {
        for(j=N-1;j>i;j--)
        {
            if(arr[i]<arr[j])
            {
                break;
            }
        }
        swap(arr,i,j);
    }
    reverse(arr,i+1,N-1);

    cout<<"The next permutation of the entered array is "<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}