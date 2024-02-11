#include<bits/stdc++.h>
using namespace std;


bool isPrime(int start,int num)
{
    if(start == num - 1) return false;
    return(num % start == 0 || isPrime(++start,num));
}
int main()
{
    int num;
    cout << "Enter the number to check whether it is a prime number or not" << endl;
    cin >> num;
    if(isPrime(2,num))
    {
        cout << "The number is not a prime number " << endl;
    }
    else 
    {
        cout << "The number is prime number " << endl;
    }
    return 0;
}