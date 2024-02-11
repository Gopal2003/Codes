#include<bits/stdc++.h>
using namespace std;

void subsetUnique(string p,string up,int i,int n,vector<string>& ans)
{
    if(i >= n)
    {
        // cout << p << endl;
        ans.push_back(p);
        return;
    }

    subsetUnique(p + up[i],up, i  + 1,n,ans);

    while(i + 1 < up.size() && up[i] == up[i + 1]) i+=1;
    subsetUnique(p,up,i + 1,n,ans);

}


int main()
{
    vector<string> ans;
    string str = "12234";
    subsetUnique("",str,0,str.size(),ans);

    for(int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
    
}