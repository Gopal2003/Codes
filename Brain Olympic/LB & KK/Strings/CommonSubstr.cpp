#include<bits/stdc++.h>
using namespace std;

/**
 * * TC: O(nlogn * m) + O(min(s1.size(),s2.size())) n is the number of strings and m is the general length of the string as in sorting we are comparing the length of the string to achieve lexico graphical sort.
 * !         |                    |
 * !      sorting              while loop which can be ignored
*/
// string getCommon(vector<string> &arr)
// {
//     sort(arr.begin(),arr.end());
//     // for(int i = 0 ; i < arr.size(); i++) cout << arr[i] << " ";
//     string s1 = arr[0];
//     string s2 = arr[arr.size() - 1];
//     int itr1 = 0,itr2 =0;
//     string ans = "";
//     while(itr1 < s1.size() && itr2 < s2.size())
//     {
//         if(s1[itr1] != s2[itr2])
//         {
//             return ans;
//         }
//         ans += s1[itr1];
//         itr1++;
//         itr2++;
//     } 
//     return ans;  
// }
/**
 * todo: Method 2 Without sorting the array
 * *TC: O(n-1 * m) n = Number of strings and m is the length of the string.
*/
string getCommon_2(vector<string> &arr)
{
    string s1 = arr[0];
    int ans_length = s1.size();
    for(int i = 1; i < arr.size(); i++)
    {
        int str_len = 0;
        while(str_len < s1.size() && str_len < arr[i].size() && s1[str_len] == arr[i][str_len])
        {
            str_len++;
        }
        ans_length = min(ans_length,str_len);
    }
    string ans = s1.substr(0,ans_length);
    return ans;
}
int main()
{
    int n = 0;
    cout << "Enter the size of the array " << endl;
    cin >> n; 
    vector<string> s(n);
    cout << "Enter the elements of the array " << endl;
    for(int i = 0 ; i < s.size(); i++) cin >> s[i];
    cout << "The longest common substr in the given string array is " <<  getCommon_2(s);
    return 0;
}

