#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your age to check whether you are eligible for voting" << endl;
    cin >> n;
    switch(n)
    {
        case 17 : 
            cout << "You can't";
            break;
        default:
            cout << "Invalid";
            break;
        case 18:
            cout << "18++";
            break;        
    }
}