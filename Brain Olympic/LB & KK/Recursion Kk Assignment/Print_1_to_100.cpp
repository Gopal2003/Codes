#include<bits/stdc++.h>
using namespace std;

/*void print(int num,int N)
{
    if(num > N) return;
    else
    {
        cout << num << endl;
        print(++num,N);
    }
}*/

void print_1(int N)
{
    if(N == 0) return;
    print_1(N - 1);
    cout << N << " ";
}

int main()
{
    int Num = 1;
    int N = 0 ;
    cout << "Enter the value upto which you want to print the series of number " << endl;
    cin >> N;
    // print(Num,N);
    print_1(N);
    return 0;
}