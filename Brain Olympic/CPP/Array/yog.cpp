#include<iostream>
using namespace std;

int arr[] = {5, 2, 9, 3, 8, 5};
int ar[] = {5, 2, 9, 3, 8, 5};
int n = 6;

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n,int sel)
{
    if(sel==0)
    {
        for(int i=1;i<n;i++)
        {
            int temp = arr[i];
            int j = i-1;
            while(j>=0 && temp<arr[j])
            {
                if(arr[j]>temp)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
            }
            arr[j+1] = temp;
        }
    }
    else if(sel==1)
    {
        for(int i=1;i<n;i++)
        {
            int temp = arr[i];
            int j = i-1;
            while(j>=0 && temp>arr[j])
            {
                if(arr[j]<temp)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
            }
            arr[j+1] = temp;
        }
    }
}


int main()
{
    //for ascending order
    cout<<"For Ascending order"<<endl;
    cout<<"Unsorted Array"<<endl;
    printArray(arr,n);
    insertionSort(arr,n,0);
    cout<<"Sorted Array"<<endl;
    printArray(arr,n);

    //for descending order
    cout<<"For Descending order"<<endl;
    cout<<"Unsorted Array"<<endl;
    printArray(ar,n);
    insertionSort(ar,n,1);  //idhr arr likh ro tho ar ka alawa
    cout<<"Sorted Array"<<endl;
    printArray(ar,n);
	return 0;
}