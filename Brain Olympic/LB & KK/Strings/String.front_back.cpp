#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ("Hello World.");
    char &back = str.back();
    back = '!';
    cout << str;
    return 0;
}