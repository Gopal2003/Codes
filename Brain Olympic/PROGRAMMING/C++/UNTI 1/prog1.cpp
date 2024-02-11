#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,4,5,3,2};
    char arr2[5]={'G','O','P','A','L'};
    string arr3[5]={"Ram","Sham","Grapes","Mango","Apple"};
      cout<<"The elements of int array is "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i];
    }

    cout<<endl;
    cout<<"The elements of char array is "<<endl;

    for(int j=0;j<5;j++){
        cout<<arr2[j]<<"\t";
    }
    cout<<endl;
    cout<<"The elements of third array is "<<endl;

    for(int k=0;k<5;k++){
        cout<<arr3[k]<<"\t";
    }
    int temp=0;
    cout<<endl;
     cout<<"sorting the int array elements in decending order";
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr1[i]<arr1[j]){
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;

            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr2[i]<arr2[j]){
               char temp2=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp2;

            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr3[i]<arr3[j]){
               string temp3=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp3;

            }
        }
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<endl;
    }

      cout<<endl;
     cout<<"sorting the char array elements in decending order"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }

      cout<<endl;
     cout<<"sorting the string array elements in decending order"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr3[i]<<endl;
    }



}