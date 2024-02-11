#include<bits/stdc++.h>
using namespace std;


int specialFibo(int a,int b, int n)
{
    if(n == 0) return a;
    if(n == 1) return b;
    return(specialFibo(a,b,n - 1) ^ specialFibo(a,b,n - 2));
}
int main()
{
    int a,b,n,T;
    cout << "Enter the values of a,b and n " << endl;
    cin >> a >> b >> n;
    int result = specialFibo(a,b,n);
    cout << "The result of the special Fibonacc series created by sunkalp is " << result << endl;
    return 0;
}