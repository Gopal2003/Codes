#include<iostream>
using namespace std;

int arr[] = {5, 3, 4, 1, 2, 6, 5, 2};
int n = 8;
int sum = 7;

int main()
{
    int s=0,i=0,j=0;
    cout<<"1"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i<<"start"<<endl;
        cout<<"2"<<endl;
        if(s<sum)
        {
            cout<<"3"<<endl;
            s=s+arr[i];
            cout<<s<<"s1"<<endl;
        }
        else if(s>sum)
        {
            cout<<"4"<<endl;
            s=s-arr[j];
            cout<<s<<"s2"<<endl;
            j++;
            i--;
            cout<<i<<"i"<<endl;
            // i--;
            // cout<<i<<"i"<<endl;
        }
        else
        {
            cout<<"5"<<endl;
            //cout<<i<<"i"<<endl;
            i--;
            cout<<j<<" "<<i<<endl;
            s=s-arr[j];
            cout<<s<<"s3"<<endl;
            j++;
        }
    }
	return 0;
}