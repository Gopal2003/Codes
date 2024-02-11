#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int arrs[sizeof arr/ sizeof(int)];
    memcpy(arrs,arr,sizeof arr);
    for(int i = 0 ; i < 5; i++) cout << arr[i] << " ";
    cout << endl << "SubArray: " << endl;
    for(int i = 0 ; i < 5 ; i++) cout << arrs[i] << " ";
    return 0;
}