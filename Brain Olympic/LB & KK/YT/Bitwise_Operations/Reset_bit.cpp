/**
 * ! Reset ith bit from 1 to 0 and if the bit is already 0 then leave it.
 * todo: Approach: AND opreation on the entered number and perform left shift with 0 till the entered position - 1.To get the musk perform compliment operation.
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
   int new_num = num & ~(1 << (pos-1)); // eg: 000010 , ~ -> 111101 2nd position will get converted to zero.
   cout << "New Number is: " << new_num << endl; 
    return 0;
}