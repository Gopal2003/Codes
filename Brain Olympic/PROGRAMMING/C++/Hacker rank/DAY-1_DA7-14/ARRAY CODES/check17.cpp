#include <iostream>
using namespace std;
int main()
{
    int N,M,i,k;
    cout << "Enter the Size for First Array: ";
    cin >> N;
    int arrN[N];
    cout << "Enter " << N << " Elements for First Array: ";
    for (i = 0; i < N; i++)
    {
        cin >> arrN[i];
    }
    cout << "\nEnter the Size for Second Array: ";
    cin >> M;
    int arrM[M];
    cout << "Enter " << M << " Elements for Second Array: ";
    for (i = 0; i < M; i++)
    {
        cin >> arrM[i];
    }
    int arrMerged[N+M];
    for(i=0;i<N;i++){
        arrMerged[i] = arrN[i];
    }
    k=i;
    for(i=0;i<M;i++){
        arrMerged[k]=arrM[i];
        k++;
    }
    cout << "\nThe New Array (Merged Array):\n";
    for (i = 0; i < k; i++)
        cout << arrMerged[i] << " ";
    cout << endl;
    return 0;
}