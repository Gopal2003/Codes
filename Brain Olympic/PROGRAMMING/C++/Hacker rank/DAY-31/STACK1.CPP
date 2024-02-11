#include <bits/stdc++.h>
#include <stack>
#include <queue>

using namespace std;

// struct stack{
//        int cap;
//        int front,rear;
//        int *arr;
//        stack(int c){
//         cap=c;
//         front=rear=0;
//         arr=new int;
//        }

//        void stackEnqueue(int x){
//         if(rear==cap-1){
//             cout<<"Stack is full";
//             return;
//         }
//         else{
//             arr[rear]=x;
//             rear++;
//         }

//        }

//        void stackDequeue(){
//         if(front==rear){
//             cout<<"Stack is empty";
//             return;
//         }

//        }
// };

int main()
{
    stack<int> s;
    queue<int> q;
    int n1, n2, elem, count = 0;
    while (n1 != 3)
    {
        cin >> n1;
        if (n1 == 1 && count <= 20)
        {
            cin >> elem;
            count++;
            s.push(elem);
        }
        if (n1 == 2)
        {
            s.pop();
            count--;
        }
    }
    int arr[count];
    if (n1 == 3)
    {
        if (count == 0)
        {
            cout << "-1";
            return 0;
        }
        else
        {
            int i = 0;
            while (s.empty() == false)
            {
                arr[i] = s.top();
                s.pop();
                i++;
            }
            for (int i = count - 1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
        }
    }
}