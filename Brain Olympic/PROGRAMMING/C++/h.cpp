#include<iostream>
using namespace std;
int main(){
    string arrName[5]={"Apple","Mango","Orange","Graphs","Lichi"};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            string temp;
            if(arrName[i]>arrName[j]){
            temp=arrName[i];
            arrName[i]=arrName[j];
            arrName[j]=temp;
                
            }
        }
    }
    cout<<endl;
    cout<<"The output of the array in alphabetical order is"<<endl;
    for(int i=0;i<5;i++){
        cout<<arrName[i]<<" ";
    }
    
}