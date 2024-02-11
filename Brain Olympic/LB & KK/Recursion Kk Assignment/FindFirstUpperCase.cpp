#include<bits/stdc++.h>
using namespace std;

/**
 * ! This program basically finds the FIRST UPPER CASE letter in the string using recursion.
*/

char FirstUpCase(string str,int idx)
{
    if(str[idx] >= 65 && str[idx] <= 90)
    {
        return str[idx];
    }
    return(FirstUpCase(str,++idx));
}
int main()
{
    
    string str;
    cout << "Enter the string which container one or more upper case letter " << endl;
    getline(cin,str);
    cout << "The first upper case letter in the entered string is: " << FirstUpCase(str,0)<<endl;
    return 0;

}