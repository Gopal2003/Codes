#include<iostream>
using namespace std;



int main() {
   
     int count = 0;
    int N,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>N;
    char arr[N];
    cout<<"Enter the element of array"<<endl;
    for(i=0;i<N;i++){
        cin>>arr[i];
    }

    for(i=0;i<N;i++){
        if(arr[i]=='W'){
            cout<<i<<endl;
            count++;
            

        }
        
    }
   
    if(count>=1){
    cout<<count<<endl;
    }

    
    if(count<1){
        cout<<"-1";
    }
    
    
    return 0;
}
