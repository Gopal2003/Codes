#include<iostream>
using namespace std;
int main(){
    int sum;
    int N=6;
    
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    for(int i=0;i<N;i++){
        sum=sum+array[i];
    }
    cout<<"The total cost of items purchased by Priya is "<<sum;

}