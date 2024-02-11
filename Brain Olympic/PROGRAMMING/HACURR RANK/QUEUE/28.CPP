#include<bits/stdc++.h>
using namespace std;

int main(){
    int queryNumber,No_of_Query,elem,count=0,j=0,count1=0;
    queue<int> q;
    cin>>No_of_Query;
    if(No_of_Query>=1 && No_of_Query<=1e5){   //1e5->1 times 10 to the power 5..
          int arr[No_of_Query];
          for(int i=0;i<No_of_Query;i++){
            cin>>queryNumber;
            if(queryNumber>=1 && queryNumber<=3){
                if(queryNumber==1){
                    cin>>elem;
                    if(elem>=1 && elem<=1e9){
                    q.push(elem);
                    }
                    count++;
                }
                else if(queryNumber==2){
                      q.pop();
                      count--;
                }
                else{
                     arr[j]= q.front();
                     j++;
                     count1++;
                }
            }
          } 

          for(int i=0;i<count1;i++){
            cout<<arr[i]<<endl;
          }
    }
    return 0;
}