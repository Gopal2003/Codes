#include<iostream>
using namespace std;
main(){
    int n,N,i,num,location,size;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int array[n]={0};
    cout<<"How many element do you want to insert to array :";
    cin>>N;
    for(i=0;i<N;i++){
        cin>>array[i];
    }

     for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number that you want to insert : ";
    cin>>num;
    if(n==N){
        cout<<"Insertion is not possible because Array Overflow..!!"<<endl;
        for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    }
    else{

         size=sizeof(array)/sizeof(array[0]);
    for(i=0;i<n;i++){
        if(num<size){
            location=size%num;
        }

        else{
            location=num%size;
        }
    }
   for( i=n-1;i>=location-1;i--){
        array[i+1]=array[i];
    }
    array[location-1]=num;
    cout<<"The element "<<num<<" inserted at the location :"<<location<<endl;

     cout<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    }


}


