#include<bits/stdc++.h>
using namespace std;
/**
 * *when we enter 04560 that doesn't mean that there are two zeroes in the numeber as 04560 is concidered as 4560 hence it reads only one 0.
 * ! when we enter 00000 then the compiler will recognize it as a single 0 and hence 1 is returned as answer.
*/
int count(int n,int Count)
{
    if(n % 10 == n && !n) {
        Count++;
        return(Count);
    }
    else if(n % 10 == n) return Count;
    int rem = n % 10;
    if(!rem) Count++;
    return(count(n/10,Count));
}

/**
 * ! Below code written by KK
*/ 
// int helper(int n, int c)
// {
//     if(n % 10 == n)return c;
//     int rem = n % 10;
//     if(rem == 0)
//     {
//         return(helper(n/10,++c));
//     }
//     return (helper(n/10,c));
// }
// int count(int num)
// {
//     return (helper(num,0));
// }

int main()
{
    int num = 0,Count = 0;
    cout << "Enter the number to find the number of zeroes present in it " << endl;
    cin >> num;
    cout << "The number of zeroes present in the entered number is " << count(num,Count) << endl;
    return 0;
}