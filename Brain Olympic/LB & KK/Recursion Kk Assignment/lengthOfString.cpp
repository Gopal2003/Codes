#include<bits/stdc++.h>
using namespace std;


int findLength(string s)
{
    if(s.size() == 1) return 1;
    return(1 + findLength(s.substr(1)));
}
int main()
{
    string str;
    cout << "Enter the string to find its length " << endl;
    // cin >> str;
    getline(cin,str);
    int length = findLength(str);
    cout << "The length of the string is " << length << endl;
    return 0;
}