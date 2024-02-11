#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string Name,Name2;
    cin>>Name;
    int strLength=Name.length();
    if(strLength>0){
        for(int i=0;i<strLength;i++){
            s.push(Name[i]);
        }

        for(int j=0;j<strLength;j++){
            Name2=Name2+string(1,s.top());
            s.pop();
        }

        if(Name==Name2){
            cout<<"Palindrome ";
        }
        else{
            cout<<"Not Palindrome";
        }

    }

}