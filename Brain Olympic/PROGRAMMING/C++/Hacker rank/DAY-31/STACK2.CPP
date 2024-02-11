#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<string> s;
    int count=0;
    string sampleName;
    cin>>sampleName;
    if(sampleName.length()>0){
        int size=sampleName.length();
        int arr[size];
        for(int i=0;i<size;i++){
              arr[i]=sampleName[i];
        }
        for(int i=0;i<size-i-1;i++){
            if(arr[i]!=arr[size-i-1]){
                count=1;
                break;
            }
        }
    }
    if(count==1){
        cout<<"Not Palindrome";
        return 0;
    }
    else{
        cout<<"Palindrome";
    }
}