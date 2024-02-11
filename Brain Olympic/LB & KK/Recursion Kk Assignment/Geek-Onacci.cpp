/*#include<bits/stdc++.h>
using namespace std;


int geek_Onacci(int a,int b,int c,int n)
{
    if(n == 1) return a;
    else if(n == 2) return b;
    else if(n == 3) return c;
    return(geek_Onacci(a,b,c,n-1) + geek_Onacci(a,b,c,n-2) + geek_Onacci(a,b,c,n-3));
}
int main()
{
    int T;
    cin >> T;
    int a , b , c, n;
    for(int i = 0 ; i < T ; i++)
    {
        cin >> a >> b >> c >> n;
        int result = geek_Onacci( a, b, c, n);
        cout << result << endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int geek_onacci(int a,int b,int c,int n)
{
    if(n == 1) return a;
    else if(n == 2) return b;
    else if(n == 3) return c;
    return(geek_onacci(a,b,c,n - 1) + geek_onacci(a,b,c,n - 2) + geek_onacci(a,b,c,n - 3));
}

int main() {
	//code
	int T;
	cin >> T;
	int a , b , c , n;
	for(int i = 0 ; i < T ; i++)
	{
	    cin >> a >> b >> c >> n;
	    cout << geek_onacci(a,b,c,n);
	}
	return 0;
}