import java.util.*;

public class ALLindex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        int target = sc.nextInt();
        System.out.println(Arrays.toString(allIndex(arr, 0, target, 0)));
        // int ans_idx = ;

    }

    public static int[] allIndex(int arr[], int idx, int target, int count) {
        if (idx == arr.length) {
            // System.out.println("Base Condition Count: " + count);

            return new int[count];
        }
        if (arr[idx] == target)
            count++;

        /*
          !- Sir's Code.
         */
        int faith[] = allIndex(arr, idx + 1, target, count);
        if (arr[idx] == target) faith[count - 1] = idx;
            

        /*
          !- My Code.
         * int faith[] = allIndex(arr, ++idx, target, count);
         * if(arr[--idx] == target) faith[--count] = idx;
         */

        // System.out.println("Count: " + count);

        return faith;
    }
}
