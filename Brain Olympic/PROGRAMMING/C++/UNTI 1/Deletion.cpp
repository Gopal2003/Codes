#include<iostream>
using namespace std;
main(){
    int LA[]={1,2,5,7,8};
    int k=3,n=5;
    int i,j=k;

    cout<<"Printing the elements of array before deletion"<<endl;

    for(i=0;i<n;i++){
        cout<<LA[i];
    }
    cout<<endl;

    for(;j<n;){
        LA[j-1]=LA[j];
        j=j+1;
    }
    n=n-1;

    cout<<"Printing the elements of array after deletion"<<endl;

    for(i=0;i<n;i++){
        cout<<LA[i];
    }
}