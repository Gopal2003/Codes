#include<bits/stdc++.h>
using namespace std;

/**
 * !- Find the factorial of the given number using recursion. Imaging that we are not inputing any negative number.
*/
int Fact(int n)
{
    if((n) <= 1) return 1;
    return n * Fact(n-1);
}

int main()
{
    int n;
    cout << "Enter a number for which you want to find the factorial " << endl;
    cin >> n;
    cout << "Factorial of the entered number is " << Fact(n);
}