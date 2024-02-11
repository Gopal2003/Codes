#include<iostream>
using namespace std;

 main(){
    int arr[6],i,newElem;
    cout<<"Creating an array of 5 elements"<<endl;
    for(int i=0;i<5;i++){
              cin>>arr[i];
    }
    
    for(int i=0;i<6;i++){
        if( arr[i]==NULL){
            cout<<"Enter the last element that you want to insert"<<endl;
            cin>>arr[i];
        }  
    }
     cout<<"Printing the whole array"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    
}
           