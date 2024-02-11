#include<bits/stdc++.h>
using namespace std;

int sum = 0;
// void Rev(int num)
// {
//     if(num == 0) return;
//     int rem = num % 10;
//     sum = sum * 10 + rem;
//     Rev(num/10);
// }

int helper(int num,int digits)
{
    if(num % 10 == num)
    {
        return num;
    }
    int rem = num % 10;
    return(rem * pow(10,digits - 1) + helper((num / 10), digits - 1));
}
int Rev2(int num)
{
    int digits = (int)log10(num) + 1; // Return the number of digits.
    return (helper(num,digits));
}
int main()
{
    int n;
    cout << "Enter the number that you want to reverse " << endl;
    cin >> n;
    cout << "Reverse of the given number is " << Rev2(n) << endl;
    return 0;
}