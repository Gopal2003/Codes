import java.util.*;

public class Vll_InsertionSort {
    public static void main(String[] args)
    {
        int arr[] = {9,7,5,11,17,14,2};
        insertionSort(arr, 1);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    public static void insertionSort(int[] arr,int currIndex)
    {
        int length = arr.length;

        if(currIndex == length)
        {
            return;
        }

        int iterator = currIndex;
        while(iterator >= 1 && arr[iterator] < arr[iterator - 1])
        {
            int temp = arr[iterator];
            arr[iterator] = arr[iterator - 1];
            arr[iterator - 1] = temp;
            iterator--;
        }

        System.out.println(Arrays.toString(arr));

        insertionSort(arr, currIndex + 1);
    }
}
