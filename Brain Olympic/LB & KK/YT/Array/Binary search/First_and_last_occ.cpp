#include<iostream>
using namespace std;


int First_occ(int arr[],int size,int key)
{
    int beg = 0,end = size - 1,mid = 0;
    int ans = -1;
    while(beg <= end)
    {
        mid = beg + (end - beg)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; 
        }
        else if(key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int Last_occ(int arr[],int size,int key)
{
    int beg = 0,end = size - 1,mid = 0;
    int ans = -1;
    while(beg <= end)
    {
        mid = beg + (end - beg)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            beg = mid + 1; 
        }
        else if(key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array in increasing order " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key value " << endl; 
    cin >> key;
    int first_oc = First_occ(arr,N,key);
    int last_oc = Last_occ(arr,N,key);
    if(first_oc != -1 && last_oc != -1)
    {
        cout << "The first occurance of " << key << " is " << first_oc << endl;
        cout << "The last occurance of " << key << " is " << last_oc << endl;
    }


}