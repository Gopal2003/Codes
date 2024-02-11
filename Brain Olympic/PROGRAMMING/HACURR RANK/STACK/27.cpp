#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int opr,elem,count=0;
    stack<int> s;
      while(opr!=4){
         cin>>opr;
         if(opr==1 && count<=20){
            cin>>elem;
           s.push(elem);
           count++;
         }
         if(opr==2){
            s.pop();
            count--;
         }
         if(count==0){
            cout<<"-1";
            return 0;
         }
         int arr[count];
         if(opr==3){
            int i=0;
             while(s.empty()==false){
                arr[i]=s.top();
                s.pop();
                i++;
             }
            //  for(int i=0;i<count;i++){
            //     arr[i]=s.top();
            //     s.pop();
            //  }
             for(int i=count-1;i>=0;i--){
                cout<<arr[i]<<" ";
             }
             return 0;
         }
      }
}