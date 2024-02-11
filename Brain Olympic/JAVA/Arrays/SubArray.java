
// package Arrays;
import java.util.*;

public class SubArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array ");
        for (int s = 0; s < n; s++)
            arr[s] = sc.nextInt();
        printSubArr(arr);
    }

    public static void printSubArr(int arr[])
    {
        for(int s = 0; s < arr.length; s++)
        {
            for(int e = s; e < arr.length; e++)
            {
                for(int m = s; m <= e; m++)
                {
                    System.out.print(arr[m] + " ");
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}
