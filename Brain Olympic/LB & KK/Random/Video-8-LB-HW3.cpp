#include<iostream>
using namespace std;

int term(int n)
{
    int AP = (3 * n) + 7;
    return AP;
}

int main()
{
    int n;
    cout << "Enter which term do you want to print in the given AP series: "; 
    cin >> n;
    cout << "The " << n << " th term in the given AP series is: " << term(n)<< endl;
    return 0;
}