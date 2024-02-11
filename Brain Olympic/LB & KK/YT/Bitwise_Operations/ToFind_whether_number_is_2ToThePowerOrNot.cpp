#include<iostream>
using namespace std;

int main()
{
    int n,count = 0;
    cout << "Enter the number to know whether the number is 2's power or not " << endl;
    cin >> n;
    // Approach 1:
    // while(n > 0)
    // {
    //     int last = n & 1;
    //     n = n >> 1;
    //     if(last == 1) count++;
    //     if(count == 2) break;
    // }
    // if(count == 2) cout << "Entered number is not in 2's power " << endl;
    // else cout << "The number is in 2's power " << endl;
    // return 0;

    //Approach 2:
    /**
     * ! 8 -> 1 0 0 0                               7 -> 1 1 1
     * ! 7 -> 0 1 1 1                               6 -> 1 1 0
     * !      0 0 0 0 then the number is 2's power       1 1 0 hence not a 2's power number. 
    */
    if(!(n & n - 1)) cout << "The entered number is the 2's power " << endl;
    else cout << "Entered number is not in 2'power " << endl;
    return 0;
}