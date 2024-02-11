import java.util.*;

public class firstOccuIndex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int x = sc.nextInt();
        System.out.println(firstOcc(arr,x,0));
    }

    public static int firstOcc(int arr[],int x,int idx)
    {
        if(idx == arr.length) return -1;
        if(arr[idx] == x) return idx;
        int faith = firstOcc(arr, x, idx + 1);
        return faith;
    }
}
