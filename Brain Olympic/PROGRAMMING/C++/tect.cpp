#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int max=0;
    for(int i=0;i<N;i++){
        while(A[i]>max){
            max=A[i];
        }
    }
    int min=A[0];
    for(int i=0;i<N;i++){
        while(A[i]<min){
            min=A[i];
        }
    }
    cout<<endl<<max<<endl;
    cout<<min<<endl;
}