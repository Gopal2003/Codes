#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector< vector<int> >ans;
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    } 
    cout << "Enter the value for the pair sum" << endl;
    int elem;
    cin >> elem;
    int i = 0,j = i+1;
    while(i < N && j < N)
    {
        if(arr[j]+arr[i] == elem)
        {
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
            
            j++;
            if(j == N)
            {
                i++;
                j = i+1;
            }
        }
        else if(j == N-1 || j == N)
        {
            i++;
            j = i+1;
        }
        else
        {
            j++;
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)
    {
        // cout << "i: " << i << endl;
        for(int j=0; j<ans[i].size(); j++)
        {
            // cout << "j: " << j << endl;
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}