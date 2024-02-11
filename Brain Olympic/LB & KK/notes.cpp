#include <iostream>
using namespace std;

int main()
{
    int amount, count = 0;
    cout << "Enter the amount: " << endl;
    cin >> amount;
    int option;
    cout << "Choose the option to know the number of notes associated with the notes " << endl;
    cout << "1. Number of 100 notes " << endl;
    cout << "2. Number of 50 notes " << endl;
    cout << "3. Number of 20 notes " << endl;
    cout << "4. Number of 1 notes " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        count = amount / 100;
        cout << "Number of hundred notes in the amount is " << count << endl;
        break;
    case 2:
        count = amount / 50;
        cout << "Number of fifty notes in the amount is " << count << endl;
        break;
    case 3:
        count = amount / 20;
        cout << "Number of twenty notes in the amount is " << count << endl;
        break;
    case 4:
        count = amount / 1;
        cout << "Number of one notes in the amount is " << count << endl;
        break;
    default:
        cout << "The facility of counting the notes only available for 100,50,20,1. what you entered doesn't matches with these numbers" << endl;
        break;
    }
    return 0;
}