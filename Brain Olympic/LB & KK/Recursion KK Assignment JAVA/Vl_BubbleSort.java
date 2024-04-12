import java.util.*;

public class Vl_BubbleSort {
    public static void main(String[] args)
    {
        int arr[] = {6,1,5,3,2};
        int length = arr.length;
        bubbleSort(arr, length);
        System.out.println(Arrays.toString(arr));
    }
    
    public static void bubbleSort(int arr[],int n)
    {
        if(n == 1)
        {
            return;
        }
        
        int count = 0;
        
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                count++;
            }
        }

        if(count == 0)
        {
            return;
        }

        bubbleSort(arr, n - 1);
    }
}
