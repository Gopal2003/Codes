#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

int main() {
   float arr[5];
   float sum=0.00;
    for(int i=0;i<5;i++)
    {
     cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
       if(arr[i]>100.00)
       {
          arr[i]=(4.0*arr[i]/5.0);
       }
       sum=sum+arr[i];
       
    }
   /* for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }*/
    cout<<fixed<<setprecision(2)<<sum;
      
    return 0;
}