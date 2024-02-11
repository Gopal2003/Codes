// package Arrays;
import java.util.*;

public class reverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array ");
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        reVerse(arr);
        for(int i = 0; i < n; i++) System.out.print(arr[i] + " ");
        System.out.println();
        reVerse(arr);
        for(int i = 0; i < n; i++) System.out.print(arr[i] + " ");
        // int arr_rev[] = new int[n];
        // for(int i = 0; i < n; i++) arr_rev[i] = arr[arr.length - i - 1];
    }
    /**
     * !- No need of the reference varaible. Java directly make changes on the actual array.
     */
    public static void reVerse(int arr[]) {
        int s = 0,e = arr.length - 1;
        while(s < e)
        {
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }
    }
    
}
