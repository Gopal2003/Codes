#include<iostream>
using namespace std;
int main(){
    cout<<"#### BUBBLE SORT ####"<<endl;
    int n,N,i,temp,j;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the number of elements of array in unsorted manner"<<endl;
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){

        if(array[j]>array[j+1]){// array[j]<array[j+1]-->decending order and array[j]>array[j+1]-->ascending order
           temp=array[j];
           array[j]=array[j+1];
        array[j+1]=temp;
        }
        }
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}