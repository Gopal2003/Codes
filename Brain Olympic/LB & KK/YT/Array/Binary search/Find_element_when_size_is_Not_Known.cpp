//The question says that we have an array of infinite size and we need to search the element in that array, Approach is that we
//we will just reverse the steps of binary search instead of dividing we will multiply exponentially (2^n)and check whether the element
//lies on that particulat range or not, TC -- O(Log n)
#include<iostream>
using namespace std;
//sample inputs -->size - 14, elements - 1 3 5 7 9 11 13 15 19 21 22 23 27 29, element to be searched - 29; 
int Reverse_binary_search(int arr[],int start,int end,int target)
{
    int mid = -1;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return mid;
}

int index_sender(int arr[],int target) 
{
    int start = 0;
    int end = 1;
    while(target > arr[end])//this is the base condition that when to stop  the exponential stuff..
    {
        int  temp = end + 1;
        //end = end(this end indicates that add sizeOfend*2 after the previous end then only we get a new box to search) + sizeOfend * 2;
        end = end + ((end - start) + 1) * 2; // exponential condition (end - start)+1--> size of the box in which will find the element and *2 to reach the desire index;
        start = temp;
    }
    return Reverse_binary_search(arr,start,end,target);
}
int main()
{
    int N;
    cout << "Enter the size of the infinity array LOL " << endl;
    cin >> N;
    int arr[N];
    cout << "Enter the element of the array " << endl;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int target = 0;
    cout << "Enter the element that you want to search in the infinity array " << endl;
    cin >> target;
    int index = index_sender(arr,target);
    if(index == -1)
    {
        cout << "Element is not present in the array " << endl;
        return 0;
    }
    cout << "The location of the element in the infinite array is " << index << endl; 
    return 0;
}