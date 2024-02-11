#include<iostream>
using namespace std;
main(){
    int i,j,n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        int currElem=arr[i];
        j=i-1;
        while(arr[j]>currElem && j>=0){
            arr[j+1]=arr[j];
            j--;
    }
    arr[j+1]=currElem;
  }

  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}