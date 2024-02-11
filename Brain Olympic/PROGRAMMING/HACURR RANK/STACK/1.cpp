#include <bits/stdc++.h>
#include <stack>
using namespace std;


int main()
{
  stack<int> s;
  int N, elem, midElem;
  cin >> N;
  cout << endl;
  int arr[N],arr1[N];
  if (N != 0 && N >= 3)
  {
    for (int i = 0; i < N; i++)
    {
      cin >> elem;
      if(elem>0)
    {
      s.push(elem);
    }      
    }
    for (int i = 0; i < N; i++)
    {
      arr[i] = s.top();
      s.pop();
    }
    

    if(N%2==0){
      midElem=N/2;
      cout<<arr[midElem]<<endl;
      s.pop();
      N--;
        midElem=N/2;
        cout<<arr[midElem]<<endl;
    }
     else{
      midElem=N/2;
      cout<<arr[midElem]<<endl;
      s.pop();
      N--;
      midElem=N/2+1;
      cout<<arr[midElem]<<endl;

     }
    
  }
  return 0;
}
