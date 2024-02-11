#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1{1,3};
    vector<int> v2{2};
    v1.insert(v1.end(),v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}