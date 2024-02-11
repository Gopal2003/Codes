#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "Gopal Agarwal";
    string str("Gopal Agarwal 2");
    s.resize(s.size() + 2,'+');
    cout << s << endl;
    cout << str << endl;
    return 0;
}