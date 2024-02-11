#include<bits/stdc++.h>
using namespace std;

bool helper(int n[],int s,int e)
{
    if(n[s] != n[e]) return 0;
    if(s > e) return 1;
    return(helper(n,++s,--e));
}

bool isPalindrome(int n[])
{
    int start = 0,end = 4;
    return(helper(n,start,end));
}
int main()
{
    int num[5] = {1,2,3,4,1};
    if(isPalindrome(num)) cout << "The number is palindrome " << endl;
    else cout << "The number is not a palindrome " << endl;
    return 0;
}