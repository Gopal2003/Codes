#include<iostream>
using namespace std;

double binarySearch(int val)
{
    int start = 0, end = val,mid = 0;
    while(start <= end)
    {
        mid = start +(end - start) / 2;
        if(mid * mid == val) return mid;
        else if(mid * mid > val) end = mid - 1;
        else start = mid + 1;
    }
    return 0;
}
double MorePrecised(double sqNum,int p,double val)
{
    double incr = 0.1;
    for(int i = 0; i < p; i++)
    {
        while(sqNum * sqNum <= val)
        {
            sqNum += incr;
        }
        sqNum -= incr;
        incr /= 10;
    }
    return sqNum;
}

int main()
{
    double value;
    cout << "Enter the square number to find its underoot value " << endl;
    cin >> value;
    double sqNum = binarySearch(value);
    int precision;
    cin >> precision;
    cout << "Enter upto how many digit value you need the under root value if the entered value is not a perfect square number " << endl;
    cout << MorePrecised(sqNum,precision,value);
}