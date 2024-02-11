// #include<iostream>
// using namespace std;

//  main(){
//     int LA[]={1,2,3,4,5};
//     int item=10, n=5, k=4;
//     int j=n,i;
//     cout<<"Printing the elements before insertion"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<"At index "<<i<<" the element is "<<LA[i]<<endl;
//     }
//     n=n+1;
//     for(;j>=k;){
//         LA[j+1]=LA[j];
//         j=j-1;
//     }
//     LA[k]=item;

//     cout<<"Printing the elements of array after insertion"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<"At index "<<i<<" the element is "<<LA[i]<<endl;
//     }
// }

#include <iostream>
using namespace std;

main() {
   int LA[] = {1,2,3,4,5};
   int item = 10,n=5,k=4;
   int  j = n,i=0;
   
   cout<<"Printing the elements before insertion"<<endl;

   for( i = 0; i<n; i++) {
      cout<<"The original array is : "<<LA[i]<<endl;
   }

   n = n + 1;
	
   for( ;j >= k;) {
      LA[j+1] = LA[j];
      j = j - 1;
   }

   LA[k] = item;

   printf("The array elements after insertion :\n");

   for( i = 0; i<n; i++) {
      cout<<"At index "<<i<<" the element is "<<LA[i]<<endl;
   }
}