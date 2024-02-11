#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the row and column of a matrix"<<endl;
    cin>>row;
    cin>>col;
    int arr[row][col];
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[row][col];
        }
    }
    int last_row=row-1;
    int last_col=col-1;
    int i,k=0,l=0;
    while(k<=last_row && l<=last_col)
    {
        for(i=l;i<=last_col;i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;
        for(i=k;i<=last_row;i++)
        {
            cout<<arr[i][last_col]<<" ";
        }
        last_col--;

        if(k<=last_row)
        {
            for(i=last_col;i>=l;i--)
            {
                cout<<arr[last_row][i]<<" ";
            }
            last_row--;
        }
        if(l<=last_col)
        {
            for(i=last_row;i>=k;i++)
            {
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
    }

}