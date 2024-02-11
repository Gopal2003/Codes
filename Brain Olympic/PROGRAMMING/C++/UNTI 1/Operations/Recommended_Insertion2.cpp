#include <iostream>
using namespace std;
 main(){
    int arr[100],n,elem,i,position;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to insert in array "<<endl;
    cin>>elem;
    cout<<"At what position you want to insert the element? "<<endl;
    cin>>position;
    for( i=n-1;i>=position-1;i--){
        arr[i+1]=arr[i];
    }
    arr[position-1]=elem;
     cout<<endl;
    cout<<"array after inserting "<<elem<< " at "<<position<<" position:"<<endl;

    for(i=0;i<=n;i++){
        cout<<arr[i]<<endl;
    }


 }
