#include<bits/stdc++.h>
using namespace std;

void func(int n)
{
    if(n == 0) return;
    cout << n << " ";
    func(n - 1);
    // cout << endl;
    // cout << n;
}
void funcRev(int n)
{
    if(n == 0 )return;
    funcRev(n - 1);
    cout << n << " ";
}
void funcBoth(int n)
{
    if(n == 0 )return;
    cout << n << " ";
    funcBoth(n - 1);
    cout << endl;
    cout << n;
}
int main()
{
    /**
     * !- Print the number from 1 to 5 in normal order and in reverse order using recursion.
    */
   cout << "Normal Order: " << endl;
   func(5);
   cout << endl;
   cout << "Reverse Order: " << endl;
   funcRev(5);
   cout << endl;
   cout << "Both Order: " << endl;
   funcBoth(5);
   return 0;
}