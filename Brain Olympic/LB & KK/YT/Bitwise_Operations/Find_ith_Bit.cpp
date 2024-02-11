/**
 * ! Given a sequence of bits. We need to find the ith position bit.
 * todo: Approach- we know that by default left position will be filled with zeroes, we need to musk the ith position with 1 in 
 * todo: order to know the bit. left shift 1 with (n - 1) times so that the 1 lands on the required location and the perform AND.
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    int pos = 0;
    cout << "Enter the position ";
    cin >> pos;
   if(num & (1 << (pos-1))) cout << "bit present at " << pos << " is 1" << endl;
   else cout << "bit present at " << pos << " is 0" << endl;
    return 0;
}