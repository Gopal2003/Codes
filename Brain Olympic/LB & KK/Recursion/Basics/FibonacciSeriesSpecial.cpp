#include <bits/stdc++.h>
using namespace std;

/**
 * ! The thing which makes this code special is that we have derived a formula for nth fibonacci series.
 */

int fiboFormula(int n)
{
      return (int)(( pow( ( ( 1 + sqrt(5) ) / 2 ) , n) - pow( ( ( 1 - sqrt(5) ) / 2 ) , n) ) / sqrt(5));
}

int main()
{
    int n = 5;
    // for(int i = 0; i < 10; i++)
    cout << fiboFormula(5) << endl;
    return 0;
}