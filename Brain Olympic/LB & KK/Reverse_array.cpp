#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int n=name.length();
    int start=0,end=n-1;
    while(start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
    cout<<name;

}