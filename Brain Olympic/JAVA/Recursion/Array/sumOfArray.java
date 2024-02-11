import java.util.*;

public class sumOfArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        // System.out.println(sum(arr,0,0));
        System.out.println(sum(arr,arr.length - 1));
    }

    public static int sum(int arr[],int n)
    {
        /*
        !- Myapproach
        if(idx == arr.length) return sum;
        sum += arr[idx];
        return(sum(arr,++idx,sum));
        */

        /*
          !- Sir's approach 
         */

         if(n == 0) return arr[n];
         int faith = sum(arr,n - 1);
         int expectation = faith + arr[n];
         return(expectation);

    }
}
