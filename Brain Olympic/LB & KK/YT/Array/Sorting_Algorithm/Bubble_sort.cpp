#include<iostream>
using namespace std;

void bubble_Sort(int arr[],int size)
{
    bool check = false;
    for(int i =0; i < size; i++)
    {
        for(int j = 1; j <= size - i - 1; j++)
        {
            if(arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1]= temp;
                check = true;
            }
        }
        if(check == false) 
        {
            cout << "Array is already sorted " << endl;
            break;
        }
        
    }
}
void display(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    // int *arr2;
    cout << "Enter the elements of the array " << endl;
    for(int i =0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubble_Sort(arr,size);
    display(arr,size);
}