#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverseStr(string &str)
{
    int x=str.length();
    stack<char> s;
    for(char ch: str)
    {
        s.push(ch);
    }
    for(int i=0;i<x;i++)
    {
        str[i]=s.top();
        s.pop();
    }
}

int main(){
    string str;
    getline(cin,str);
    int x=str.length();
    if(x>=5 && x<=30)
    {
        reverseStr(str);
        cout<<str;
    }
}


