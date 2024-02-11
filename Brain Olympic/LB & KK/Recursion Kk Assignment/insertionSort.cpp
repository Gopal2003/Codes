#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> &arr,int n)
{
    
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr = insertionSort(arr,n);
}