#include<iostream>
using namespace std;


int find_sqrt(int sqrt)
{
    int start = 1,end = sqrt,mid = 0,ans = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        // int sq = mid * mid;// Error as int * int causes a large size of int which an int can't hold..
        if(sqrt / mid == mid)//--> sqrt / mid == mid --> 9 / 3 == 3;
        {
            return mid;
        }
        else if(sqrt / mid > mid )
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int sqrt = 0;
    cout << "Enter the number to find its sqrt " << endl;
    cin >> sqrt;
    int sqrt_number = find_sqrt(sqrt);
    cout << sqrt_number;
    return 0;
}