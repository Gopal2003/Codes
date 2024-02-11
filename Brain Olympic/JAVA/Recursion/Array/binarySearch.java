import java.util.*;
public class binarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int target = sc.nextInt();
        System.out.println(binaryRec(arr,0,n - 1,target));
    }

    public static int binaryRec(int arr[],int s,int e,int target)
    {
        if(s > e) return -1;
        int mid = s + (e - s) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) return(binaryRec(arr, s, mid - 1,target));
        return(binaryRec(arr, mid + 1,e,target));
    }
}
