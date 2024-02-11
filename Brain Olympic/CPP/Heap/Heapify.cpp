/*
void build_Heap(int arr[], int n)
{
for(int i=n/2; i>0; i--)
heapify(arr, i);
}

void heapify(int arr[], int i)
{
int l = 2*i;
int r = 2*i + 1;

int largest = i;
if( l < n && arr[l] > arr[largest]) largest = l;
if(r < n && arr[r] > arr[largest]) largest = r;

if(i != largest)
{
int temp = arr[i];
arr[i] = arr[largest];
arr[largest] = temp;
heapify(arr, largest);
}
}
*/