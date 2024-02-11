// #include<iostream>
// using namespace std;
// int main()
// {
//     int size,count=0;
//     cout<<"Enter the size of the array "<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     int sum=0;
//     cout<<"Enter the sum of the sub array"<<endl;
//     cin>>sum;
//     if(sum==0)
//     {
//         cout<<"No subarray possible";
//         return 0;
//     }
//     for(int i=0;i<size;i++)
//     {
//         int k=i;
//         int temp=k;
//         int sum_elem=0;
//         while(sum_elem<sum)
//         {
//             sum_elem=sum_elem+arr[k++]; 
//         }
//         if(sum_elem==sum)
//         {
//             count++;
//             cout<<temp<<" - "<<k-1<<endl;
//         }

//     }
//     if(count==0)
//     {
//         cout<<"No subarray found";
//     }
//     return 0;

// }

#include<iostream>
using namespace std;

int arr[] = {5, 3, 4, 1, 2, 6, 5, 2};
int n = 8;
int sum = 7;

int main()
{
    int s=0,i=0,j=0;

    for(i;i<n;i++)
    {
        if(s<sum)
            s+=arr[i];
        else if(s>sum)
        {
            s-=arr[j];
            j++;
        }
        else
        {
            cout<<j<<" "<<i<<endl;
            s-=arr[j];
            j++;
        }
    }
	return 0;
}
