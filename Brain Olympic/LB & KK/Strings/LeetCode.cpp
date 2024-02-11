#include <bits/stdc++.h>
using namespace std;
// string freqAlphabets(string s)
// {
//     string str = "";
//     int n = s.length();
//     int i = 0;
//     while (i < n)
//     {
//         if (s[i + 2] < n && s[i + 2] == '#')
//         {
//             string str2 = s.substr(i,2);
//             int num = stoi(str2);
//             char c = char(num + 96);
//             str.push_back(c);
//             i += 3;
//         }
//         else
//         {
//             string str2 = s.substr(i, 1);
//             int num = stoi(str2);
//             char c = (num + 96);
//             str.push_back(c);
//             i += 1;
//         }
//     }
//     return str;
// }
/*
int main()
{
    string str = "";
    string s = "10#11#12";
    // cin >> s;
    // cout << "Decrypted key are " << freqAlphabets(s);
    int i = 0;
    while(i < s.size())
    {
        if (i + 2 < s.length() && s[i + 2] == '#')
        {
            string str2 = s.substr(i,2);
            int num = stoi(str2);
            char c = char(num + 96);
            str.push_back(c);
            i += 3;
        }
        else
        {
            string str2 = s.substr(i, 1);
            int num = stoi(str2);
            char c = (num + 96);
            str.push_back(c);
            i += 1;
        }
    }
    cout << str;
    // i += 3;
}
*/

int main()
{
    string str = "gopal";
    int idx = str.find("a");
    cout << idx;
    return 0;
}

