#include<bits/stdc++.h>
using namespace std;

// int productOftwo(int num1,int num2, int sum)
// {
//     if(num2 == 0) return sum;
//     sum += num1;
//     return(productOftwo(num1,--num2,sum));
// }

int productOftwo(int num1,int num2)
{
    if(num2 == 0) return 0;
    return(num1 + productOftwo(num1,--num2));
}
int main()
{
    int num1,num2;
    cout << "Enter two number to which you want to find its product " << endl;
    cin >> num1 >> num2;
    if(num1 > num2)
    {
        cout << "The product of two numbers are " << productOftwo(num1,num2);
    }
    else
    {
        cout << "The product of two numbers are " << productOftwo(num2,num1);
    }
}