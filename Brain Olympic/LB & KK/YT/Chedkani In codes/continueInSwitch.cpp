#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number options are 1 and 0" << endl;
    cin >> num;
    switch(num)
    {
        case 0:
                cout << "Case 0 aagya bhai " << endl;
                // continue; -- > gives error reason in the notes.
        case 1:
                cout << "Case 1 aagya bhai" << endl;
                break;
        default:
                cout << "Default case aagya bhai " << endl;
                break;
    }
}