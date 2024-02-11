#include<bits/stdc++.h>
using namespace std;


// void getComb(int i,vector<int> &arr,int requSum,int currSum,vector<int>& subset,vector<vector<int>> &ans)
// {
//     if(currSum == requSum)
//     {
//         ans.push_back(subset);
//         return;
//     }
//     if(currSum > requSum) return;

//     if(i >= arr.size()) return;


//     currSum += arr[i];
//     subset.push_back(arr[i]);
//     getComb(i,arr,requSum,currSum,subset,ans);

//     currSum -= arr[i];
//     subset.pop_back();

//     getComb(i + 1,arr,requSum,currSum,subset,ans);
// }


void getComb(int i,vector<int> &arr,int requSum,int currSum,string p)
{
    if(currSum == requSum)
    {
        cout << p << endl;
        return;
    }
    if(currSum > requSum) return;

    if(i >= arr.size()) return;


    p += to_string(arr[i]);
    currSum += arr[i];
    // cout << p;
    getComb(i,arr,requSum,currSum,p);

    currSum -= arr[i];
    p.pop_back();
    getComb(i + 1,arr,requSum,currSum,p);

}

int main()
{

    vector<int> arr{1,2,3};
    vector<int> subset;
    vector<vector<int>> ans;

    getComb(0,arr,5,0," ");

    return 0;
}