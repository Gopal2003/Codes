#include<iostream>
#include<vector>
#include<utility>
using namespace std;


pair<int,int> BinarySearch(vector<vector<int>> &arr,int target,int r,int c)
{
    pair<int , int> p1;
    int start = 0,end = c - 1;
    while(start < r && c >= 0)
    {
        if(arr[r][c] == target)
        {
            p1.first = r;
            p1.second = c;
            return p1;
        }
        else if(arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    p1.first = -1;
    p1.second = -1;
    return p1;
}
int main()
{
    int row,col;
    cout << "Enter the number of rows and columns of the array matrix" << endl;
    cin >> row;
    cin >> col;
    vector<vector<int>> arr;
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            int num;
            cin >> num;
            arr[i].push_back(num);
        }
    } 
    int target;
    cout << "Enter the target element " << endl;
    cin >> target;
    pair<int,int> p;
    p = BinarySearch(arr,target,row,col);

}