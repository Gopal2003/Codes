#include<bits/stdc++.h>
using namespace std;

/**
 * ! Count Sort.
*/
string sort(string str)
{
    vector<int> freq(26,0);
    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a'] ++;
    }
    int index = 0;
    for(int i = 0; i < freq.size(); i++)
    {
        while(freq[i]--)
        {
            str[index++] = 'a' + i;
        }
    }
    return str;
}
int main()
{
    string s;
    cout << "Enter the string to sort it in ascending order according to their ASCII value" << endl;
    cin >> s;
    // sort(s);
    cout << "Sorted string is " << sort(s) << endl;
    return 0;
}