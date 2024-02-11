#include<bits/stdc++.h>
using namespace std;


void getComblll(string p,int i,int k,int n,int sum)
{
    if(sum > n || i > n || i == 10) return;

    if(p.size() == k)
    {
        if(sum == n) 
        {
            cout << p << endl; 
        }  

        return;
    }

    //shuffle the conditions
    // if(sum == n)
    // {
    //     if(p.size() == k) 
    //     {
    //         cout << p << endl; 
    //     }  

    //     return;
    // }

    if(p.size() > k) return;

    sum += i;
    getComblll(p + (to_string(i)),i + 1,k,n,sum);

    sum -= i;
    // p.pop_back();
    getComblll(p,i + 1,k,n,sum);

}



int main()
{
    getComblll("",1,2,5,0);
    return 0;
}
