#include<iostream>
using namespace std;

int print(int n)
{
    cout << n << endl;
    if(n == 5) return n;
    print(n + 1);
}
int main()
{
    int n = 1;
    int returnVal = print(n);
    cout << "Returned Value is: "  << returnVal << endl;
    cout << n;
    return 0;
}