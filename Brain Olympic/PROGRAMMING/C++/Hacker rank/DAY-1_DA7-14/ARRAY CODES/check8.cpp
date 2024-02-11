#include<iostream>
using namespace std;
main(){
    int NUMBER[10],index,i,elem,count=0;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<10;i++){
          cin>>NUMBER[i];
    }
    cout<<"Enter the element to search"<<endl;
    cin>>elem;

    for(i=0;i<10;i++){
        if(NUMBER[i]==elem){
            index=i+1;
        }
        if(NUMBER[i]!=elem){
            count=count+1;
        }
        
    }
    if(count==10){
        cout<<"ELEMENT NOT FOUND"<<endl;
    }
    else{

    cout<<"The element "<<elem<<" is present at "<<index<<" th position";
    }
}