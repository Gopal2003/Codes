#include<bits/stdc++.h>
using namespace std;


int findIndex(vector<int>& arr,int key,int s,int e)
{
    int mid = s + (e - s) / 2;
    if(s > e) return -1;
    if(arr[mid] == key) return mid;
    if(arr[s] <= arr[mid])
    {
        if(key >= arr[s] && key <= arr[mid])
        {
           return(findIndex(arr,key,s,mid - 1));
        }
        else
        {
            return(findIndex(arr,key,mid + 1,e));
        }
    }
    else 
    {
        if(key >= arr[mid] && key <= arr[e])
        {
            return(findIndex(arr,key,mid + 1,e));
        }
        else
        {
            return(findIndex(arr,key,s,mid - 1));
        }
    }

}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < arr.size(); i++) cin >> arr[i];
    int key;
    cout << "Enter the value of the key " << endl;
    cin >> key;
    int index = findIndex(arr,key,0,arr.size() - 1);
    cout << "The index at which the element is present is " << index << endl;
    return 0;
}