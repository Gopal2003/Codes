#include<iostream>
using namespace std;
/**
 * todo: check notes for the brief explanation.
*/
    
 
int main()
{
    int num;
    cout << "Enter a number to check whether the entered number is even or odd" << endl;
    cin >> num;
    if(num & 1)
    {
        cout << "ODD Number";
    }
    else 
    {
        cout << "EVEN Number";
    }
    return 0;
}
