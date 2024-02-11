#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    queue<char> q;
    int n1,count=0,count1=0;
    char character;
     while(n1!=2){
        cin>>n1;
        if(n1==1){
            count++;
            if(count<=7){
            cin>>character;
            q.push(character);
            }

            else{
                cout<<"OVERFLOW";
                return 0;
            }
        }
        else{
            count1++;
            break;
        }
        if(count1>=1){
            break;
        }

    }
    if(n1==2){
        q.pop();
        cout<<q.front()<<endl;
        cout<<q.back()<<endl;
    }
    else{
        cout<<q.front()<<endl;
        cout<<q.back()<<endl;
    }


}

// ANOTHER APPROACH

// #include<bits/stdc++.h>
// #include<queue>
// using namespace std;

// struct Queue{
//     int front,rear;
//     char* arr;
//     Queue(int c){
//        front=rear=0;
//        arr=new char;
//     }

//     void queueEnqueue(char data){
//             arr[rear]=data;
//             rear++;
//     }

//     void queueDequeue(){
//          for(int i=0;i<rear;i++){
//             arr[i]=arr[i+1];
//          }
//          rear--;

//     }
//     void displayQueue(){
//         if(front==rear){
//             cout<<"Queue is empty";
//             return;
//         }
//         for(int i=0;i<rear;i++){
//             if(i==0){
//             cout<<arr[i]<<endl;
//             }
//             if(i==rear-1){
//               cout<<arr[i]<<endl;
//             }
//         }
//     }
// };


// int main(){
//     int n1,count=0,count1=0;
//     char character;
//     Queue q(0);
//     while(n1!=2){
//         cin>>n1;
//         if(n1==1){
//             count++;
//             if(count<=7){
//             cin>>character;
//             q.queueEnqueue(character);
//             }

//             else{
//                 cout<<"OVERFLOW";
//                 return 0;
//             }
//         }
//         else{
//             count1++;
//             break;
//         }
//         if(count1>=1){
//             break;
//         }

//     }
        
//     if(n1==2){
//     q.queueDequeue();
//     q.displayQueue();
//     }
//     else{
//         q.displayQueue();
//     }
// }