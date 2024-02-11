#include<iostream>
using namespace std;

char binary_search(char arr[],int size,char target)
{
    int start = 0, end = size - 1,mid =0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] > target)
        {
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return arr[start % size];
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    char arr[N];
    cout << "Enter the character elemetns of array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    char M;
    cout << "Enter the target elemet " << endl;
    cin >> M;
    char letter = binary_search(arr,N,M);
    cout << "The smallest among the largest letters for the entered character element is " << letter << endl;
    return 0;
}