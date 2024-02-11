#include<iostream>
using namespace std;
main(){
    int array[20];
    int n,i,j;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    cout<<"Enter the elements of array "<<endl;
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    for(i=0;i<n;i++){
    if(array[i]%2!=0 && array[i+1]%2!=0 && array[i+2]%2!=0 ){
        for(j=i;j<n;j++){
            array[j]=array[j+1];
        }
        n--;
        i--;
    }

    }
        for(i=0;i<n;i++){
            cout<<array[i]<<" ";
        }

}