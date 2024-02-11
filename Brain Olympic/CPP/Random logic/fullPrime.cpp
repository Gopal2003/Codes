#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    for (int i = 2; i < number/2; i++)
    {
        if(number % i == 0) return false;
    }
    return true;
}

bool eachDigit(int number)
{
    int y = number; 
    while(y != 0)
    {
        int x = y % 10;
        y = y / 10;
        if(x == 1)
        {
            return false;
        }
        else if(x == 2)
        {
            continue;
        }
        else
        {
            for(int i = 0; i < x/2; i++)
            {
                if(x % 2 == 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int num,count = 0;
    cout << "Enter the number to check whether it is full prime or not" << endl;
    cin >> num;
    if(isPrime(num))
    {
        if(eachDigit(num))
        {
            cout << "The entered number is a full prime number";
            return 0;
        } 
        else
        {
            cout << "The entered number is not a full prime number";
            return 0;
        }
    }
    else
    {
        cout << "Entered number is not a prime number";
    }
    return 0;
}