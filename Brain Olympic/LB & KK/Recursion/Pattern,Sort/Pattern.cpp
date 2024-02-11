#include<bits/stdc++.h>
using namespace std;

// void ReverseTriangle(int r,int c)
// {
//     if(r == 0) return;
//     if(c >= r)
//     {
//         cout << endl;
//         c = 0;
//         r--;
//     }
//     else
//     {
//         cout << "*" << " ";
//         c++;
//     }
//     ReverseTriangle(r,c);
// }

void Triangle(int r,int c)
{
    if(r == 0) return;
    if(c < r)
    {
        c++;
        Triangle(r,c);
        cout << "*" << " ";
    }
    else
    {
        r--;
        c = 0;
        Triangle(r,c);
        cout << endl;
    }
}
int main()
{
    // ReverseTriangle(5,0);
    Triangle(5,0);
    return 0;
}