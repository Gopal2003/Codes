// package Arrays;
import java.util.*;

public class Search {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array ");
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.println("Enter the number to find its index in the array ");
        int num = sc.nextInt();
        System.out.println("The number " + num + " is at the index " + findIdx(arr,num,n));
    }

    public static int findIdx(int arr[],int num,int n)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == num) return i;
        }
        return -1;
    }
}
