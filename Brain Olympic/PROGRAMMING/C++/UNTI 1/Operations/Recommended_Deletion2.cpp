#include<iostream>
using namespace std;
main(){
    int arr[10],elem,position,i,n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter deleting position from array "<<endl;
    cin>>position;
    for(i=position-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<endl;
    cout<<"Array after deleting the element of "<<position<<" th position:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}