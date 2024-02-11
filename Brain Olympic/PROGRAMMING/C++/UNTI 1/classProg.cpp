#include<iostream>
using namespace std;

double Average(int array[],int size){
        float sum = 0.0;
        for(int i=0;i<size;i++){
            sum=sum + array[i];
        }
        return(sum/size);
}

int arrSum(int array[],int size){
    int sum=0;
      for(int i=0;i<size;i++){
            sum=sum + array[i];
        }
        return(sum);
}
main(){
    int products=6,i,arr[6],current;
    cout<<"Enter the price of the products "<<endl;
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<"Traversing the whole array "<<endl;
    for(i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }

    for( i=1;i<6;i++){
          current=arr[i];
          int j=i-1;
          while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
          }
          arr[j+1]=current;
    }

    cout<<"Printing the new sorted array in ascending order "<<endl;

    for(i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"The sum of the products's price is  "<<arrSum(arr,6)<<endl;
    cout<<"The average of the products's price is "<<Average(arr,6)<<endl;
}