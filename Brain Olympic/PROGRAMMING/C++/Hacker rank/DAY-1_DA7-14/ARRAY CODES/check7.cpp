#include<iostream>
using namespace std;
int main(){
    int n,i,index;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the index of the element for deletion "<<endl;
    cin>>index;
    for(i=index;i<n-1;i++){
        array[i]=array[i+1];
    }
    n--;

    cout<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}