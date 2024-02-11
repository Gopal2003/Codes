#include<bits/stdc++.h>
using namespace std;

string removeDup(string given,string ans,char prevChar)
{
    if(given.length() == 1 && prevChar == given[0]) return ans;
    else if(given.length() == 1 && prevChar != given[0]) 
    {
        ans += given[0];
        return ans;
    }
    if(ans == "")
    {
        ans += given[0];
    }
    if(given[0] == prevChar)
    {
        given = given.substr(1);
    }
    else
    {
        ans += given[0];
        prevChar = given[0];
        given = given.substr(1);
    }
    return(removeDup(given,ans,prevChar));
}

int main()
{
    string given = "";
    cout << "Enter the sequence of character to remove the duplicate characters " << endl;
    cin >> given;
    string ans = removeDup(given,"",given[0]);
    cout << "The string after removing all the duplicate: " << ans;
    return 0;
}