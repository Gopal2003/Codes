#include<iostream>
using namespace std;
/**
 * !                                                    power->        3   2   1       
 * ! Question - Magic number in the sense let entered number be 6 now,5   5   5  , Hence the magic number will be 125 + 25 = 150
 * !                                                                  1  1  0
 * todo: First we need to convert the number into binary form then get each bit by & operation and multiply it with 5 every time.
*/
int main()
{
    int n;
    cout << "Enter the to find the magic number of its bits " << endl;
    cin >> n;
    int num = n;
    int ans = 0,base = 5;
    while(n > 0)
    {
        int last = n & 1;
        n = n >> 1;
        ans = ans + last * base;
        base = base * 5;
    }
    cout << "Magic number for " << num << " is " << ans << endl;
    return 0;
}