import java.util.*;
public class barChar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        printGraph(arr);
    }
    public static void printGraph(int arr[])
    {
        int max = arr[0];
        // System.out.println();
        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] > max) max = arr[i];  
        }
        // System.out.print(max);
        for(int floor = max; floor > 0; floor--)
        {
            for(int i = 0; i < arr.length; i++)
            {
                if(arr[i] >= floor) System.out.print("* ");
                else System.out.print("  ");
            }
            System.out.println();
        }
    }
}
