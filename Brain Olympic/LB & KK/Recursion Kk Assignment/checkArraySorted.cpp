#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> arr)
{
    if(arr.size() == 1) return true;
    arr.erase(arr.begin());
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    cout << endl;
    return(arr[0] < arr[1] && check(arr));
}
int main()
{
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array to check whether the array is sorted or not" << endl;
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(check(arr))
    {
        cout << "True";
    }
    else cout << "False";
    return 0;
}