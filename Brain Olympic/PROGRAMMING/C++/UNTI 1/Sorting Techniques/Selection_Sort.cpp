// My Code

// #include<iostream>
// using namespace std;

// void swap(int X,int Y){
//     int temp = X;
//         X=Y;
//         Y=temp;
// }

// main(){
//     int i,j,n,Min_ind;
//     cout<<"Enter the size of the array "<<endl;
//     cin>>n;
//     int array[n];
//     cout<<"Enter the elements of the array "<<endl;
//     for(i=0;i<n;i++){
//         cin>>array[i];
//     }

//     for(i=0;i<n-1;i++){
//         Min_ind=i;
//         for(j=i+1;j<n;j++){
//             if(array[j]<array[i]){
//                 Min_ind=j;
//             }
//         }
//             int temp=array[Min_ind];
//             array[Min_ind]=array[i];
//             array[i]=temp;
//     }

//     for(i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array * /
    void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 97, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
