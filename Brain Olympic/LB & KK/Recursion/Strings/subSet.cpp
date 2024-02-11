#include<bits/stdc++.h>
using namespace std;


string* subseq(string proc,string unProc,string* ans,int i)
{
    if(unProc.empty())
    {
        // cout << proc << " ";
        ans[i++] = proc;
        return ans;
    } 


    char ch = unProc[0];

    
    ans = subseq(proc + ch,unProc.substr(1),ans,i);
    return(subseq(proc ,unProc.substr(1),ans,i));
}
int main()
{
    string str = " ";
    cin >> str;
    int n = pow(2,str.length());
    string *arr = new string[n];
    string* ans = new string[n];
    ans = subseq("",str,arr,0);
    // cout << ans[0];
    return 0;
}