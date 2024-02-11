#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n,n1,elem,j=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>n1;
        if(n1==1){
            cin>>elem;
            q.push(elem);
        }
        if(n1==0){
           arr[j] =q.front();
           q.pop();
           j++;
        }
    }
    for(int k=0;k<j;k++){
        cout<<arr[k]<<" ";
    }

}