import java.util.*; 

public class sortAccToSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i ++) arr[i] = sc.nextInt();
        insertionSort(arr);
        System.out.println(Arrays.toString(arr));
    }
    public static void insertionSort(int []arr)
    {
        for(int i = 1; i < arr.length; i++)
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(arr[j + 1] * arr[j + 1]< arr[j] * arr[j]) swap(arr,j,j + 1);
                else break;
            }
        }
    }
    
    public static void swap(int []arr,int a,int b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}

