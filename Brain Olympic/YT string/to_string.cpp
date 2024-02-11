#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 431;
    int num2 = 2;
    string n1 = to_string(num1);
    string n2 = to_string(num2);
    n1 += n2;
    num1 = stoi(n1);
    num1++;
    cout << num1 << endl;
    return 0;
}