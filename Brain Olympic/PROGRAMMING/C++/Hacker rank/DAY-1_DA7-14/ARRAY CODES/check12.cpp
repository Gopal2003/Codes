#include<iostream>
using namespace std;
main(){
    int n,pos,i;
    cout<<"Enter the number of persons"<<endl;
    cin>>n;
    char arr[n],X;
    if(n>=0){
    cout<<"Enter the persons name"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position "<<endl;
    cin>>pos;
    cout<<"Enter the person name"<<endl;
    cin>>X;
    if(pos>0){
        n++;
    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=X;
    cout<<endl;
    for(i=0;i<n;i++){
       cout<<arr[i]<<"\t";
    }
    }
    else{
        cout<<"Invalid Position";
    }

    }
}