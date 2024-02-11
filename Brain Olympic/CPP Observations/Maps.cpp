#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> umap;
    umap.insert({{2,0},{5,1},{5,2}});
    int search = 0;
    cin >> search;
    if(umap.find(search) != umap.end())
    {
        // umap[search]++;
        cout << "Element found at index " << umap[search] << endl;
    }
    else 
    {
        cout << "Element is not found " << endl;
    }
    int count = umap.count(search);
    cout << "Count: " << count;
    // for(auto x : umap)
    // {
    //     cout << x.first << " " << x. second << endl;
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     int first = 0,second = 0;
    //     umap.first = first;
    // }
    return 0;
}
