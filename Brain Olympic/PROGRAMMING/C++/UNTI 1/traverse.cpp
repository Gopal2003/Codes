#include<iostream>
using namespace std;
    float average(int points[],int size){
         double sum=0.0;
         for(int i=0;i<size;i++){

         sum=sum+points[i];

         }
         return sum/size;
         
}

 int main(){
    int points[]={18,76,56,78,43};
    cout<<average(points,5);
 }