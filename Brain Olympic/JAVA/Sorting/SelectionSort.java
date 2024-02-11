//The selection sort is reverse of the bubble sort. In bubble, the largest element is at its right place whereas in selection sort, the smallest element will be at its correct index... and the array will be sorted from the beginning.

// Finding the minimum element for the ith position.
import java.util.*;

public class SelectionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        selectionSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int m = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[m])
                    m = j;
            }
            swap(arr, i, m);
        }
    }
    public static void swap(int []arr,int idx,int minIdx)
    {
        int temp = arr[idx];
        arr[idx] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

    // public static void SortArr(int arr[]) {
    // for (int i = 0; i < arr.length; i++) {
    // int min = i;
    // for (int j = i + 1; j < arr.length; j++) {
    // if (arr[j] < arr[i])
    // min = j;
    // }
    // SwapArr(arr, i, min);
    // }
    // }

