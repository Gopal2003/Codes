#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 1) return 1;
    return(n * fact(n - 1));
}
int main()
{
    int n;
    cout << "Enter a number to find the factorial of entered number " << endl;
    cin >> n;
    cout << "The factorial of the entered number is " << fact(n);
    return 0;
}