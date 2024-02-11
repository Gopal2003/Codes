#include<iostream>
using namespace std;
main(){
   int n,i,elem;
   cout<<"How many times you want to play"<<endl;
   cin>>n;
   while(n--){
    int sum=0;
     for(i=0;i<7;i++){
        cin>>elem;
        sum=sum+elem;
     }
     cout<<endl;
     if(sum>=56){
        cout<<1<<endl;
     }
     else{
        cout<<0;
     }
   }
}