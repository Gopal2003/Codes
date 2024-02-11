#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore(256, '\n');
  string arr;
  if (n >= 0 && n <= 20)
  {
    getline(cin, arr);
    int nsize = arr.size();
    for (int i = 0; i < nsize; i++)
    {
      if (arr[i] == 32)
      {
        continue;
      }
      if (arr[i] >= 97 && arr[i] <= 122)
      {
        cout << arr[i] << " ";
        continue;
      }

      if (arr[i] >= 48 && arr[i] <= 57)
      {
        cout << arr[i] << " ";
        continue;
      }

      if (arr[i] >= 65 && arr[i] <= 90)
      {
        cout << arr[i] << " " << (char(arr[i] + 32)) << " ";
      }
    }
  }
  else
  {
    cout << "Invalid size of array";
  }

  return 0;
}