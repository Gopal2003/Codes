#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,elem,firstElem,count=0,count1=0;
    cin>>N;
    if(N>3 && N<=12){
        int arr[N];
        for(int i=0;i<N;i++){
            count++;
            cin>>elem;
            if(count==1){
            firstElem=elem;
            }
            arr[i]=elem;
        }
        // cout<<firstElem;

        for(int i=1;i<N;i++){
            int curr=arr[i];
            int j=i-1;
            while(arr[j]>curr && j>=0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=curr;
        }
        for(int k=0;k<N;k++){
            if(arr[k]<firstElem){
                count1++;
            }
        }
        cout<<count1;
    }
    else{
        cout<<"Enter correct range";
    }
}