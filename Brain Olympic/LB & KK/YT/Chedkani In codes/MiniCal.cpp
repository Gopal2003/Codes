#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the first number " << endl;
    cin >> a;
    cout << "Enter the second number " << endl;
    cin >> b;
    int op;
    cout << "Enter the operation that you want to perform." << endl;
    cout << "1. Addition(+)" << endl;
    cout << "2. Subtraction(-)" << endl;
    cout << "3. Multiplication(*)" << endl;
    cout << "4. Division(/)" << endl;
    cout << "5. Modulo for the output of remainder" << endl;
    cin >> op;
    switch(op)
    {
        case 1:
                cout << "Addition of the two entered number: " << (a+b) << endl;
                break;
        case 2:
                cout << "Subtraction of the two entered number: " << (a-b) << endl;
                break;
        case 3:
                cout << "Multiplication of the two entered number: " << (a*b) << endl;
                break;
        case 4:
                cout << "Division of the two entered number: " << (a/b) << endl;
                break;
        case 5:
                cout << "Remainber when " << a << "is divided by " << b << " is " << (a%b) << endl;
                break;
        default:
                cout << "Exiting";
                break;               
    }
    return 0;
}