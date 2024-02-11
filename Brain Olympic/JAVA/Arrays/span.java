// package Arrays;
import java.util.*;

public class span {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array ");
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.println("The Span of the given array is " + getSpan(arr));
    }

    public static int getSpan(int arr[])
    {
        int max = arr[0],min = arr[0];
        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
        return((max - min));
    }
}
