#include<bits/stdc++.h>
using namespace std;
/**
 * !Anagram- Another word can be generated from the same word with same count of characters in both the words.
*/
bool anagram(string s1, string s2)
{
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // return (s1 == s2 ? true : false);
    vector<int> freq(26,0);
    for(int i = 0; i < s1.size(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    for(int i = 0; i < s1.size(); i++)
    {
        freq[s2[i] - 'a']--;
    }
    for(int i = 0 ; i < freq.size(); i++)
    {
        if(freq[i] != 0) return false;
    }
    return true;
}
int main()
{
    string s1;
    string s2;
    cout << "Enter two string to check whether they are anagram or not " << endl;
    cin >> s1 >> s2;
    if(anagram(s1,s2)) cout << "True";
    else cout << "False";
    return 0;
} 