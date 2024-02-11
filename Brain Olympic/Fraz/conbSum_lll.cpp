#include<bits/stdc++.h>
using namespace std;


void getComblll(string p,int i,int k,int n,int sum)
{
    if(i > n) return;
    if(sum == n && p.size() <= k) 
    {
        cout << p;
        return;
    }
    if(p.size() > k) return;

    sum += i;
    getComblll(p + (to_string(i)),++i,k,n,sum);

    sum -= i;
    getComblll(p,++i,k,n,sum);

}



int main()
{
    getComblll("",1,2,5,0);
    return 0;
}
