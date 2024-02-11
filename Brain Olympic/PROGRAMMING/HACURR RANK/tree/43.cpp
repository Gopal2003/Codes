#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  struct Node  *left;
  struct Node  *right;
  Node(int k){
    key=k;
    left=right=NULL;
  }
};

int CalculateHeight(int N){
    if(N==1){
        return 1;
    }
    else if(N==2 || N==3){
        return 2;
    }
    else if(N==4 || N==5 || N==6 || N==7){
        return 3;
    }
    else {
       return 4;
    }
    
}


int main(){
    int n;
    cin>>n;
    if(n>=3 && n<=10){
        cout<<CalculateHeight(n);
    }
    else{
        cout<<"NOT IN RANGE";
    }
}