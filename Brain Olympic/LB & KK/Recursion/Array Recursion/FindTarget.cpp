#include<bits/stdc++.h>
using namespace std;

/*int findIndex(vector<int>& arr,int target,int idx)
{
    if(idx == arr.size()) return -1;
    // cout << arr[idx] << " ";
    if(arr[idx] == target) return idx;
    // cout << idx << " " << endl;
    return(findIndex(arr,target,++idx));
}
*/
// bool findIndex(vector<int> &arr,int target,int idx)
// {
//     if(idx == arr.size()) return false;
//     return(arr[idx] == target || findIndex(arr,target,++idx));
// }

// vector<int> findAllIndex(vector<int>& arr,int target, int i,vector<int>& ans)
// {
//     if(i == arr.size()) return ans;
//     if(arr[i] == target) ans.push_back(i);
//     return(findAllIndex(arr,target,++i,ans));
// }

/**
 * ! The below function is not an optimal solution, Hence don't use it.
*/
vector<int> findAllIndex(vector<int>& arr,int target,int i)
{
    vector<int> ans;
    if(i == arr.size()) return ans;
    if(arr[i] == target) ans.push_back(i);
    vector<int> ansFromBelow(1); 
    ansFromBelow = findAllIndex(arr,target,++i);
    for(int i = 0; i < ansFromBelow.size(); i++)
    {
        ans.push_back(ansFromBelow[i]);
    }
    return(ans);
}
int main()
{
    vector<int> ans;
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < n; i ++) cin >> arr[i];
    int target;
    cout << "Enter the target element " << endl;
    cin >> target;
    ans = findAllIndex(arr,target,0);
    cout << "The indices of the elements are " << endl;
    for(int i = 0 ; i < ans.size() ; i++) cout << ans[i] << " ";
    return 0; 
}