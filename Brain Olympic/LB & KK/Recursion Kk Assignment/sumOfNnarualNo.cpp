#include<bits/stdc++.h>
using namespace std;

int sumOfN(int num,int sum)
{
    if(num == 1) return sum;
    sum += num;
    return(sumOfN(--num,sum));
}
int main()
{
    int num;
    cout << "Enter a number 'N' to find the sum of 'N' Natural number " << endl;
    cin >> num;
    cout << "The sum of N Natural number is " << sumOfN(num,1);
}