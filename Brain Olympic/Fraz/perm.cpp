#include<bits/stdc++.h>
using namespace std;

void perm(int p,string s,vector<string> &ans)
{

    if(p >= s.length())
    {
        ans.push_back(s);
        return;
    }
    for(int i = p; i < s.length(); i++)
    {
        swap(s[i],s[p]);
        perm(p + 1,s,ans);
        swap(s[p],s[i]);
    }
}

int main()
{
    vector<string> ans;
    perm(0,"abc",ans);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
}