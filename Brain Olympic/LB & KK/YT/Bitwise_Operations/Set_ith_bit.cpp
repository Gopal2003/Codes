/**
 * ! turn ith bit from 0 to 1 and if the bit is already 1 then leave it.
 * todo: Approach: OR opreation on the entered number and perform left shift with 1 till the entered position - 1.
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
   int new_num = num | (1 << (pos-1));
   cout << "New Number is: " << new_num << endl; 
    return 0;
}