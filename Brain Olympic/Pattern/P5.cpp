#include<iostream>
// #include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter upto how much row you want to extend yout pattern: ";
    cin >> n;
    for(int i = 0; i < ((2 * n) - 1); i++)
    {
        if(i >= n)
        {
            for(int j = ((2 * n) - 1) - i; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        else 
        {
            for(int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}