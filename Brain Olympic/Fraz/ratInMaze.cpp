#include<bits/stdc++.h>
using namespace std;

void findPath(int i,int j,int n,int m,vector<vector<int>>& arr,string str)
{
    if(i < 0 || j < 0 || i == n || j == m || arr[i][j] == 0) return;
    if(i == n-1 && j == m - 1)
    {
        cout << str << endl;
        return;
    }
    arr[i][j] = 0;
    findPath(i + 1,j,n,m,arr,str+='D');
    findPath(i,j - 1,n,m,arr,str+='L');
    findPath(i,j + 1,n,m,arr,str+='R');
    findPath(i - 1,j,n,m,arr,str+='U');
    arr[i][j] = 1;

}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> ans[i][j];
        }
    }
    findPath(0,0,n,m,ans,"");
    return 0;
}