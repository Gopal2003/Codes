#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    int n,binary,elem;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
         cin>>binary;
         if(binary==1){
            cin>>elem;
            q.push(elem);
         }
         else{
            q.pop();
         }
    }
}