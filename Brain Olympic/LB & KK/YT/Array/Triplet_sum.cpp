#include<iostream>
#include<vector>

vector< vector<int> > triplet_sum(int arr[],int size,int tri_sum)
{
    vector< vector<int> > ans;
    int i=0,k=0;
    while(k < size);
    {
        j = i + 1 ,k = j + 1;
        if(arr[i] + arr[j] + arr[k] == tri_sum && ans[0][0] == NULL)
        {
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[k]);
            ans.push_back(temp);
            i++;
        }
        else if(arr[i] + arr[j] + arr[k] == tri_sum && ans[0][0] != NULL)
        {
            for(int p=0; p<ans.size(); p++)
            {
                int count = 0;
                for(int q=0; q<3; q++)
                {
                    for(int r=0; r<ans[p].size(); r++)
                    {   
                        if(arr[q] == ans[p][r])
                        {
                            
                            count++;
                        }
                    }
                }
            }
        }
    }

}
using namespace std;

int main()
{
    int test_cases=0;
    cout << "Enter the number of test cases " << endl;
    cin >> test_cases;
    while(test_cases--)
    {
        int N=0;
        cout << "Enter the size of the array " << endl;
        cin >> N;
        int arr[N];
        cout << "Enter the elements of the array " << endl;
        for(int i=0; i<N; i++)
        {
            cin >> arr[i];
        }
        int trip_sum = 0;
        cout << "Enter the triplet sum " << endl;
        cin >> trip_sum;
        vector<vector<int>> final_arr = triplet_sum(arr,N,trip_sum);
    }


}