#include<iostream>
using namespace std;

int main(){
   int elem,N,count1=0,count=0;
   cin>>N;
   if(N>0 && N<=5){
    for(int i=0;i<N;i++){
        int arr[7];
        int sum=0;
        for(int i=0;i<7;i++){
           cin>>elem;
           arr[i]=elem;
        }
        for(int j=0;j<7;j++){
            sum=sum+arr[j];
        }
        if(sum==56){
            count++;
        }
        else{
            count1++;
        }
    }
    for(int k=0;k<count;k++){
        cout<<"1"<<endl;
    }
    for(int m=0;m<count1;m++){
        cout<<"0"<<endl;
    }
    // cout<<count;
   }
}
