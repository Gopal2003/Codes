#include<bits/stdc++.h>

using namespace std;


bool isPalindrome(int l,int r,string& s)
{
    if(l >= r) return true;
    return(s[l] == s[r] && isPalindrome(l + 1,r - 1, s));
}
int main()
{
    string s = "rada";
   bool chek = isPalindrome(0,s.length() - 1,s);
   cout << chek;
   return 0;
}