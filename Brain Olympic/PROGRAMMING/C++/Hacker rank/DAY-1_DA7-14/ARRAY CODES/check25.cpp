#include<iostream>
using namespace std;
int main(){
   int N,M,i,k;
   int count=0;
   cout<<"Enter the number of employee in programming domain"<<endl;
   cin>>N;
   int arrN[N];
   cout<<"Enter the elements of N"<<endl;
   for( i=0; i<N; i++){
    cin>>arrN[i];
   } 
   cout<<"Enter the number of Automata domain "<<endl;
   cin>>M;
   int arrM[M];
   cout<<"Enter the members of automata "<<endl;
   for( i=0; i<M; i++){
    cin>>arrM[i];
   }
   int arrMerged[N+M];
   for(i=0;i<N;i++){
    arrMerged[i]=arrN[i];
   }
   k=i;

   for(i=0;i<M;i++){
    arrMerged[k]=arrM[i];
    k++;
   }
   cout << "The New Array (Merged Array):"<<endl;
    for (i = 0; i < k; i++){
        
        cout << arrMerged[i] << " ";
    }
        cout<<endl;
    for(i=0;i<k;i++){
        if(arrMerged[i]%2==0){
           cout<<i<<" ";
            count++;
        }
        
    }

    if(count==0){
        cout<<"-1";
    }




}