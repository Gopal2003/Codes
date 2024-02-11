// #include<bits/stdc++.h>
// #include<stack>
// #include<string>
// using namespace std;
// int main(){
//     int n,count=0,count1=0,M=0;
//     string sampleWord;
//     stack<string> s;
//     cin>>n;
//     if(n>=1){
//         string arr2[n];
//         for(int i=0;i<n;i++){
//             count1=0;
//             cin>>sampleWord;
//        int size=sampleWord.length();
//         char arr[size];
//         for(int i=0;i<size;i++){
//               arr[i]=sampleWord[i];
//         }
//         for(int i=0;i<size;i++){
//             if(arr[i]!=arr[size-i-1]){
//                 count1++;
//                 break;
//             }
//         }
//         if(count1==0){
//                 count++;
//             arr2[M]="Yes";
//             M++;
            
//         }
//         else{
//             count++;
//             arr2[M]="No";
//             M++;
//         }
//         }
//         if(count==n){
//              for(int i=0;i<n;i++){
//              cout<<arr2[i]<<endl;
//              }
//              return 0;
//         }
//     }
//     else{
//         cout<<"Invalid Input";
//     }
   
    
// }
// SECOND IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;

// bool isPalindrome(string s)
void isPalindrome(string s){
    int a=s.size();
    stack<char> st;
    for(int i=0;i<a;i++){
        st.push(s[i]);
    }
    string x;
    for(int i=0;i<a;i++){
        x=x+string(1,st.top());  //1->no. of copy of the st.top() value....                          
        st.pop();
    }
    if(x==s){
        cout<<"Yes"<<endl;
        // return true;
    }
    else{
        cout<<"No"<<endl;
        // return false;
    }
    
}

int main(){
    int n;
    string x;
    cin>>n;
    if(n>=1){
    for(int i=0;i<n;i++){
          cin>>x;
          isPalindrome(x);
        //   if(isPalindrome(x)){
        //     cout<<"Yes"<<"\n";
        //   }
        //   else{
        //     cout<<"No"<<endl;
        //   }
    }

    }
    else
    {
        cout<<"Invalid Input";
    }
}

