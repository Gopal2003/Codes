#include<iostream>
using namespace std;

int main()
{
    /**
     * ! Approach- XOR all elements i.e., a ^ a = 0 and 0 ^ a = a.
    */
   int XOR = 0;
   int arr[7]= {1,3,2,4,3,2,1};
   for(int i = 0; i < 7; i++)
   {
        XOR = arr[i] ^ XOR;
   }
   cout << "Unique element is " << XOR;
   return 0;
}