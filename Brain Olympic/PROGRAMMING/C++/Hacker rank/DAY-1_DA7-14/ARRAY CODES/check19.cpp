#include<iostream>
using namespace std;

main(){
    int Z,i,j;
    cout<<"Enter the number of cards"<<endl;
    cin>>Z;
    int arr[Z];
    cout<<"Enter "<<Z<<" card numbers"<<endl;
    for(i=0;i<Z;i++){
        cin>>arr[i];
    }
    for(i=1;i<Z;i++){
        int currElem=arr[i];
        j=i-1;
        while(arr[j]>currElem && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=currElem;

    }
    cout<<endl;
    for(i=0;i<Z;i++){
        cout<<arr[i]<<" ";
    }
}


