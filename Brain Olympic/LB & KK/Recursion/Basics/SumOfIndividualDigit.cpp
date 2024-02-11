#include<bits/stdc++.h>
using namespace std;


int SumOfD(int num)
{
    int n = num % 10;
    num = num / 10;
    if(n == 0) return n;
    return (SumOfD(num) + n);
}

int Prod(int num)
{
    int n = num % 10;
    if(n == num) return n;
    num = num / 10;
    return (Prod(num) * n);
}
int main()
{
    int n;
    cout << "Enter the number to find the sum of its digits " << endl;
    cin >> n;
    // cout << "Sum of the digits is " << SumOfD(n);
    cout << "Product of the digits is " << Prod(n);
}