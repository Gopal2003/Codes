#include<bits/stdc++.h>
using namespace std;


int sumOfDigit(int num)
{
    if(num == 0) return 0;
    int digit = num % 10;
    return(digit + sumOfDigit(num / 10));
}
int main()
{
    int num;
    cout << "Enter a number to find its digit sum " << endl;
    cin >> num;
    int result = sumOfDigit(num);
    cout << "The sum of the digits is " << result << endl;
    return 0;
}