/**
 * ! Find the position of the bit where the first 1 starts in the entered number.
 * todo: Approach: Run a for loop and perform AND operation with 1 with every bit of the number starting from left side.
 * todo: if after performing AND operation ans is 1 then print position of the number else perform left shift operation.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,i = 0;
    cout << "Enter the number ";
    cin >> num;
    while(!(num & (1 << i)) )
    {
        i++;
    }
    cout << "The position of the set bit is " << i + 1 << " and binary value is " << pow(2,i);
    return 0; 
}