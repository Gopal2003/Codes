#include<iostream>
using namespace std;

int main(){
    int elem,n;
    if(1<=n<=1e5){
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>elem;
        if(-1e9<=elem<=1e9){
        arr[i]=elem;
        if(arr[i]==arr[i+1]){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
        }
        }      
    }

}