#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void mergearray(int arr1[], int arr2[], int n1, int n2)
{

    int n3 = n1 + n2;
    int arr3[n3], i, j;

    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (i = 0, j = n1;
         j < n3 && i < n2; i++, j++) {
        arr3[j] = arr2[i];
    }
    bubblesort(arr3,n3);
    for (i = 0; i < n3; i++) {
        cout<<arr3[i]<<endl;
    }
}

int main()
{
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    if(n1>0 &&n1<=20)
    {
        for(int i=0;i<n1;i++)
        {
            cin>>arr1[i];
            if(i!=0)
            {
                if(arr1[i]>arr1[i-1])
                {
                    cout<<"Incorrect Array Elements";
                    return 0;

                }
            }
        }
        cin>>n2;
        if(n1!=n2)
        {
            int arr2[n2];
            if(n2>0 && n2<=20)
            {
                for(int i=0;i<n2;i++)
                {
                    cin>>arr2[i];
                    if(i!=0)
                    {
                        if(arr2[i]>arr2[i-1])
                        {
                            cout<<"Incorrect Array Elements";
                            return 0;
                        }
                    }
                }
            }
            else
            {
                cout<<"Invalid Array";
                return 0;
            }
            mergearray(arr1,arr2,n1,n2);
        }
        else
        {
            cout<<"Invalid Array";
            return 0;
        }
    }
    else
    {
        cout<<"Invalid Array";
    }
    return 0;
}