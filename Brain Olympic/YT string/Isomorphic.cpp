#include<bits/stdc++.h>
using namespace std;
/**\
 * ! Isomorphic- one to one mapping.
*/
// bool isIsomorphic(string s1,string s2)
// {
//     unordered_map<char,char> umap;
//     if(s1.size() != s2.size()) return 0;
//     for(int i = 0 ; i < s1.size(); i++)
//     {
//         if(umap.find(s1[i]) !=  umap.end())
//         {
//             if(umap[s1[i]] != s2[i]) return 0;
//         }
//         else
//         {
//             umap[s1[i]] = s2[i];
//         }
//     }
//     return 1;
// }

bool isIsomorphic(string s1, string s2)
{
    vector<int> str1(128,-1);
    vector<int> str2(128,-1);
    if(s1.size() != s2.size()) return 0;
    for(int i = 0 ; i < s2.size(); i++)
    {
        if(str1[s1[i]] != str2[s2[i]]) return 0;
        str1[s1[i]] = str2[s2[i]] = i;
    }
    return 1;
}
int main()
{
    string s1,s2;
    cout << "Enter two string to check whether they are iosmorphic or not " << endl;
    cin >> s1 >> s2;
    if(isIsomorphic(s1,s2))
    {
        cout << "They are isomophic. " << endl;
    }
    else
    {
        cout << "They are not isomorphic. " << endl;
    }
    return 0;
}