#include<iostream>
using namespace std;
int main(){
    int N,i,j;
    cin>>N;
    int array[N];
    if(N<=1){
        cout<<"Invalid Input "<<endl;
   } 
   else{
    for( i=0; i<N; i++){
        cin>>array[i];
    }
    for( i=0;i<N;i++){
        if(array[i]==array[i+1]){
            for( j=i;j<N;j++){
                array[j]=array[j+1];
            if(array[j]==array[j-1]){
                array[j-1]=array[j];
            }
            }
            N--;
            
        }
    }

   }  
   if(N>1){
 for(int i=0;i<N;i++){
        cout<<array[i]<<" ";
    }
   }    
          
       

}


