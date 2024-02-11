#include<iostream>
using namespace std;
main(){
    int arr[100],size,i,elem,f,found=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter "<<size<<" elements"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to delete"<<endl;
    cin>>elem;
    for(i=0;i<size;i++){
        if(arr[i]==elem){
            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];
                found++;
            }
        }
    }
    // i--;
    size--;
    cout<<endl;
    cout<<"Array after deletion"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}