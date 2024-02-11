import java.util.*;

public class BasicCode{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int elem = sc.nextInt();
        System.out.println( "The entered value is present at the index: "+ binarySearch(arr,elem));
    }
    public static int binarySearch(int arr[],int value)
    {
        int s = 0, e = arr.length -;
        int mid = 0;
        while(s <= e)
        {
            mid = (s + e)/ 2;
            if(arr[mid] == value)
            {
                return mid;
            }
            else if(arr[mid] > value)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }

}