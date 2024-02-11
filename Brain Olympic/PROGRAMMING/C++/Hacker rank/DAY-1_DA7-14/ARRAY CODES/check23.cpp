#include<iostream>
using namespace std;



void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubbleSort(int arr[],int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
main(){
    int i,arr[10];
    cout<<"Enter 10  heights of student "<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,10);
    printArray(arr,10);
}