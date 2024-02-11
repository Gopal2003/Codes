#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int> v;
    stack<int> s;
    int num = 0;
    cout << "Enter the number to which you want to find the binary represenation of it " << endl;
    cin >> num;
    cout << "Binary representation of the entered number is " << endl;
    while(num > 0)
    {
        int last = num & 1;
        s.push(last);
        num = num >> 1;
    }   
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}