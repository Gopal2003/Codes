#include<iostream>
using namespace std;


long long int find_square(int num)
{
    int beg = 0,end = num;
    long long int mid = 0;
    int ans = -1;
    while(beg <= end)
    {
        mid = beg + (end - beg)/2;
        long long int square = mid*mid;
        if(square == num)
        {
            return mid;
        }
        else if(square > num)
        {
            end = mid -1;
        }
        else
        {
            ans = mid;
            beg = mid + 1;
        }
    } 
    return ans;
}

double more_precisise(int sq_num,int precision,int num)
{
    double ans = sq_num;
    cout << "ans " << ans;
    double divider = 1;
    for(int i=0; i<precision; i++)
    {
        divider = divider/10;
        for(double j = ans; j * j <num; j = j + divider)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int sq_num;
    cout << "Enter the number of which you want to find square root " << endl;
    cin >> sq_num;
    int num = find_square(sq_num);
    cout << "The square root of " << sq_num << " is " << num << endl;
    int precisions;
    cout << "Enter up to how many precisions(numbers after decimal point) the value must be printed " << endl;
    cin >> precisions; 
    cout << "Precisied answer is " << more_precisise(num,precisions,sq_num) << endl;
    return 0;
}
