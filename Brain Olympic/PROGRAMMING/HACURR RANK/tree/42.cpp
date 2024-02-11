#include<bits/stdc++.h>
using namespace std;





int main(){
    int N,elem;
    cin>>N;
    if(N>2 && N<=10){
        int arr[N];
        for(int i=0;i<N;i++){
            if(i==0){
                arr[i]=0;
            }
            else{
            cin>>elem;
            arr[i]=elem;
            }
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
            cout<<arr[k];
            }
           
            // root=insert(root,elem);
        }
        // preorder(root,count);
        // cout<<arr[1];
    }
    else{
        cout<<"Invalid Size";
    }
}