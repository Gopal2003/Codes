#include<bits/stdc++.h>
using namespace std;
int main(){
     int N,searchElement,i=0,count=0;
     cin>>N;
     int arr[N];
     for(i=0;i<N;i++){
        cin>>arr[i];
     }
     cin>>searchElement;
     for(i=0;i<N;i++){
        if(arr[i]==searchElement){
            cout<<"Found at index "<<i;
            count++;
            return 0;
        }
     }
     if(count==0){
        cout<<"Not found";
     }
   return 0;
}