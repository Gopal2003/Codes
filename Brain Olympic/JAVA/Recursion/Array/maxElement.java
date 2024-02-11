import java.util.*;

public class maxElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.println(maxValue(arr,arr.length - 1));
    }

    public static int maxValue(int arr[],int n)
    {
        if(n == 0) return arr[n];
        int faith = maxValue( arr, n - 1);
        int expectation = Math.max(arr[n],faith);
        return expectation;
    }
}
