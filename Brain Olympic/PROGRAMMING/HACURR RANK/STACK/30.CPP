#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string>s;
    int n1,n2,noOfElem,i=0,count=0,j=0,k=0;
    string elem,deletedElem;
    while(n1!=5){
            cin>>n1;
        if(n1==1){
            cin>>noOfElem;
            for(i=0;i<noOfElem;i++){
            cin>>elem;
            s.push(elem);
            count++;
            }    
        }
        // count--;
        if(n1==2){
            deletedElem=s.top();
           s.pop();
           cout<<deletedElem<<endl;
           string arr[count];
           while(s.empty()==false){
            arr[j]=s.top();
            s.pop();
            j++;
           }
           for(k=count-2;k>=0;k--){
            cout<<arr[k]<<" ";
           }
           return 0;
        }
    }
}
