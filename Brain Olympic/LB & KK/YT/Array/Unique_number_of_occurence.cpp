#include<iostream>
using namespace std;

bool check_num(int elem,int arr_num[],int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr_num[i] == elem)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cout << "Enter the size of the array" << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array "<<endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<N-1 ; i++)
    {
        int curr = arr[i];
        int j = i-1;
        while(arr[j] > curr && j >= 0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
    int arr_freq[N];
    int idx = 0;
    for(int i=0; i<N; i++)
    {
        int count=1;
        for(int j=i+1; j<N; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        arr_freq[idx] = count;
        idx++;
    }
    for(int i=0; i<N; i++)
    {
        if(arr_freq[i] == arr_freq[i+1] && arr_freq[i] != 0)
        {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true";
    return 0;

}