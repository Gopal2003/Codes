#include<bits/stdc++.h>
using namespace std;

/*
string remover(string str,int i, string str_f)
{
    if(i > str.size() - 1) return str_f;
    if(str[i] != 'a') str_f.push_back(str[i]);
    return(remover(str,++i,str_f));
}
int main()
{
    string str;
    cout << "Enter the string " << endl;
    cin >> str;
    str = remover(str,0,"");
    cout << "The string after removing the 'a' is: " << str;
    return 0;
}
*/

string remover(string str,string str_f)
{
    if(str == "") return str_f;
    if(str[0] != 'a') str_f.push_back(str[0]);
    str = str.substr(1);
    return(remover(str,str_f));
}
int main()
{
    string str;
    cout << "Enter the string " << endl;
    cin >> str;
    str = remover(str,"");
    cout << "The string after removing 'a' is: " << str;
    return 0; 
}