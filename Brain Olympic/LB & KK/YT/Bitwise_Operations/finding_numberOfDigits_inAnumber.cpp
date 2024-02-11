#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    int b = 0;
    cout << "Enter the base of the number " << endl;
    cin >> b;
    int ans = (int) (log(num) / log(b)) + 1;
    cout << "Number of digits in number when represented in " << b << " form is " << ans;
    return 0; 
}