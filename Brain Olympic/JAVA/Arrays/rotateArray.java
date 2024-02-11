import java.util.*;

public class rotateArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int k = sc.nextInt();
        int ans[] = arrayR(arr,k);
    }

    public static int[] arrayR(int arr[],k)
    {
        if(k > arr.length)
        k %= arr.length;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin() +k);
        reverse(arr.begin()+k,arr.end());
    }
}   
