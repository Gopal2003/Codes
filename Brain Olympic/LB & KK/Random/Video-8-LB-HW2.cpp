#include<iostream>
using namespace std;


int bitcount(int a, int b)
{
    int first = a,second = b,count = 0,sum = 0 ;
        while(first != 0)
        {
            if(first & 1)
            {
                count++;
            }
            first >>= 1;
        }
        // sum += count;
        while(second != 0)
        {
            if(second & 1)
            {
                count++;
            }
            second >>= 1;
        }
        // sum += count;
    return count;
}
int main()
{
    int a ,b;
    cout << "Enter two number to know the number of set bits present in them " << endl;
    cin >> a >> b;
    int bits = bitcount(a,b);
    cout << "The total number of bits present in the given two numbers are : " << bits << endl;
    return 0;
}