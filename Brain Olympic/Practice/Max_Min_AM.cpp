#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"enter the size of array"<<endl;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Minimum element "<<arr[0]<<endl;
    cout<<"Maximum element "<<arr[N-1];

}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout<<"Enter the size of array"<<endl;
//     cin>>N;
//     int arr[N];
//     for(int i=0;i<N;i++)
//     {
//         cin>>arr[i];
//     }
//     int min=arr[0],max=arr[1];
//     for(int i=2;i<N;i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//         else if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     cout<<"Minimum element "<<min<<endl;
//     cout<<"Maximum element "<<max<<endl;
// }

